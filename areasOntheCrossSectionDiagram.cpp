#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> S1;
    stack<pair<int, int>> S2;
    char ch;
    int sum=0;
    for( int i=0; cin >> ch; i++){
        if ( ch == '\\'){
            S1.push(i);
        }
        else if(ch == '/' && !S1.empty()){
            int tmp = i - S1.top();
            sum+=tmp;//総和の方に加算
            while( !S2.empty() && S2.top().first > S1.top() ){//各水たまりを計算
                tmp+=S2.top().second;
                S2.pop();
            }

            S2.push(make_pair(S1.top(), tmp));//一番新しい水たまりをスタックに加える
            S1.pop();
        }
        else if(ch == '_') continue;
        else if(ch == 'f') break;
    }
    vector<int> S3;
    while(!S2.empty()){
        S3.push_back(S2.top().second);
        S2.pop();
    }
    cout << sum << endl;
    cout << S3.size();
    if(!S3.empty()){
        for(int i = (int)S3.size()-1; i > -1; i--){
                cout << " " << S3[i] ;
        }
    }
   cout << endl;
}
