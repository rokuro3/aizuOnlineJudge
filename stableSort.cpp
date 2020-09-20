#include <bits/stdc++.h>
using namespace std;
typedef vector<pair<string,int>> vp;

vp bubbleSort(vp &a1, int n){
    vp a(a1);
    for(int i=0; i< n; i++){
        for(int j=n-1; j>i; j--){
            if(a[j].second < a[j-1].second){
                swap(a[j],a[j-1]);
            }
        }
    }
    cout << a[0].first;
    for(int i=1; i<n;i++){
        cout << " ";
        cout << a[i].first;
    }
    cout << endl;
    return a;
}

vp selectionSort(vp &a1, int n){
    vp a(a1);
    for(int i=0; i<n;i++){
        int minj = i;
        for(int j=i; j<n; j++){
            if(a[minj].second > a[j].second){
                minj =j;
            }
        }
        swap(a[i],a[minj]);
    }
    cout << a[0].first;
    for(int i=1; i<n;i++){
        cout << " ";
        cout << a[i].first;
    }
    cout << endl;
    return a;

}

int main(void){
    int n;
    cin >> n;
    vp a;
    for(int i=0;i <n;i++){
        string tmp;
        cin >> tmp;
        a.push_back(make_pair(tmp, tmp[1] - '0'));
    }
    vp b = bubbleSort(a,n);
    cout << "Stable" << endl;
    vp c = selectionSort(a,n);
    if(b == c){
        cout << "Stable" << endl;
    }
    else cout << "Not stable" << endl;
}

