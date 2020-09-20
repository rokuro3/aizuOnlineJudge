#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n;
    cin >> n;
    ll Ar[n];
    for(int i=0;i<n;i++){
        cin >> Ar[i];
    }
    ll maxv = Ar[1] - Ar[0];
    ll minv = Ar[0];
    for(int i=1; i<n;i++){
        maxv = max(maxv,Ar[i]-minv);
        minv = min(minv,Ar[i]);
    }
    cout << maxv << endl;
}