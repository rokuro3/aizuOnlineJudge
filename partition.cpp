#include <bits/stdc++.h>
using namespace std;

int partition1(vector<int> &a, int p, int r){
    int x = a[r];
    int i = p -1 ;
    for(int j = p; j <= r; j++)
        if(x >= a[j])
            swap(a[j],a[++i]);
    return i;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n;i++)
        cin >> a[i];
    int pi = partition1(a, 0, n-1);
    vector<string> b(n);
    for(int i=0;i<n;i++){
        if(i ==pi)
            b[i] = "[" + to_string(a[i]) + "]";
        else
            b[i] = to_string(a[i]);
    }
    cout << b[0];
    for(int i=1;i <n; i++){
        cout << " " << b[i]; 
    }
    cout << endl;
}