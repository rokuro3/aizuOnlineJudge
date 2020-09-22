#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<int(N);++i)
#define print(v) { cerr<<#v<<": [ "; for(auto _ : v) cerr<<_<<", "; cerr<<"]"<<endl; }

typedef long long ll;
template<typename T>
class BIT{
  public:
    int N;
    vector<T> data;
    BIT(T _N):N(_N){
        data.assign(N+1, 0);
    };
    
    // a is 1-indexed
    void add(int a, T w){
        for(int x = a; x <= N; x += x & -x)data[x] += w;
    }
    // 1-indexed sum of prefix [0, a]
    T sum(int a){
        T res = 0;
        for(int x = a; x > 0; x -= x & -x)res += data[x];
        return res;
    }
    // 1-indexed sum of range [l, r]
    T sum(int l, int r){return sum(r) - sum(l-1);}

    // 0-indexed add
    void add0(int a, T w){add(a + 1, w);}
    // 0-indexed sum
    T sum0(int a){return sum(a + 1);}
    // 0-indexed sum of range
    T sum0(int l, int r){return sum0(r) - sum0(l-1);}
    // show the value
    void debug(){print(data);}
};


int main() {
    int N;
    cin >> N;
    vector<ll> a(N),b(N);
    vector<pair<ll, int>> ap;
    rep(i,N){
        cin>>a[i];
        ap.push_back(make_pair(a[i], i));
    }
    sort(ap.begin(), ap.end());
    rep(i,N)b[ap[i].second] = i;
    BIT<long long> c(N);
    ll ans = 0;
    rep(i,N){
        ans += i - c.sum0(b[i]);
        c.add0(b[i], 1);
    }
    cout << ans << endl;
}