#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<pair<string,int>> qps;
    int n, q;
    cin >> n >> q;
    int tt = 0;
    for(int i=0; i< n; i++){
        string name;
        int time;
        cin >> name >> time;
        //pair<string, int> tmp = make_pair(name, time);
        qps.push( make_pair(name, time));
    }
    while( !qps.empty()){
        pair<string, int> tmp = qps.front();
        qps.pop();
        if( q >= tmp.second ){
            tt += tmp.second;
            cout << tmp.first << " " << tt << endl;

        }
        else
        {
            qps.push( make_pair(tmp.first, tmp.second - q));
            tt += q;
        }
        
    }
}