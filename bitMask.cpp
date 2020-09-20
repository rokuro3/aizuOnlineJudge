#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int main(){
    int n;
    cin >> n;
    vector<pii> mask;
    for(int i = 0; i < n;i++){
        pii p;
        cin >> p.first >> p.second;
        mask.push_back(p);
    }
    long long q;
    cin >> q;
    for(long long i = 0; i q; i++){
        pii 
    }

    bitset<64> bs1(0);
    for(auto &v: vec){
        switch (v.first) {
            case 0:
                cout << bs1[v.second] << endl;
                break;
            case 1:
                bs1.set(v.second);
                break;
            case 2:
                bs1.reset(v.second);
                break;
            case 3:
                bs1[v.second] = ~bs1[v.second];
                break;
            case 4:
                cout << bs1.all() << endl;
                break;
            case 5:
                cout << bs1.any() << endl;
                break;
            case 6:
                cout << bs1.none() << endl;
                break;
            case 7:
                cout << bs1.count() << endl;
                break;
            case 8:
                cout << bs1.to_ullong() << endl;
                break;
        }
    }
}