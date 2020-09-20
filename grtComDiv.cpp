#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll a,b;
    cin >> a >> b;
    ll tmp;
    if (a < b) tmp = a, a = b, b = tmp;
    while(b>0){
        ll r = a % b;
        a = b;
        b = r;
    }
    cout << a << endl;
}