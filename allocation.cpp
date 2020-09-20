#include <bits/stdc++.h>
using namespace std;

int value(vector<int> Ar,int n, int p){
    int w=0, k=1;
    for(int i=0; i< n; i++){
        if(w + Ar[i] <= p)
            w+=Ar[i];
        else{
            w = Ar[i];
            k++;
        }
    }
    return k;
}

int main(){
    int n, k;
    cin >> n >> k ;
    vector<int> Ar;
    int maxv=0, sum = 0;
    for(int i=0; i< n; i++){
        int tmp;
        cin >> tmp;
        Ar.push_back(tmp);
        maxv = max(maxv,Ar[i]);
        sum += Ar[i];
    }
    while(maxv != sum){
        int mid = (maxv + sum)/2;
        if(value(Ar, n, mid) > k)
            maxv = mid + 1;
        else
            sum = mid;
    }
    cout << sum << endl;
}