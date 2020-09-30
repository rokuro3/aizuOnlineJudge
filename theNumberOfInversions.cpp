#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef struct bit{
    vector<ll> vec;
    ll n;
    bit(ll num) :vec(num+1,0){ n = num;}
    void add(ll i, ll w){
        if(i == 0) return;
        for(ll k = i; k<=n; k+=(k & -k)){//LSBをとるようなループ
            vec[k] +=w;
        }
    }
    ll sum(ll i){
        ll s = 0;
        if(i == 0) return s;
        for(ll k = i; k>0 ; k-=(k &-k)){//LSBをとるようなループ
            s+=vec[k];
        }
        return s;
    }
}BIT;
//1-indexedで作成していることに注意

int main(){
    ll n;
    cin >> n;
    BIT bit(n+1);
    vector<ll> a(n),b(n);
    vector<pair<ll, ll>> ap;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        ap.push_back(make_pair(a[i],i));
    }
    sort(ap.begin(), ap.end());//apをソート
    for(ll i=0; i<n; i++)
        b[ap[i].second] = i + 1;
        //a[i].secondにはソート前の要素を指し示す添え字がはいっている
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ans += i - bit.sum(b[i]);
        bit.add(b[i], 1);
    }
    cout << ans << endl;
}

