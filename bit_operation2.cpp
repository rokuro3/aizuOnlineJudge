#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a,b;
    cin >> a >> b;
    vector<bool> veca,vecb;
    while(1){
        veca.push_back(a%2);
        a = a/2;
        if(!a) break;
    }
    long size = (long)veca.size();
    for(long i=0; i< 32 - size; i++){
        veca.push_back(0);
    }
    while(1){
        vecb.push_back(b%2);
        b = b/2;
        if(!b) break;
    }
    long sizeb = (long)vecb.size();
    for(long i=0; i< 32 - sizeb; i++){
        vecb.push_back(0);
    }
    //andの出力
    for(int i=31; i > -1; i--){
        cout << (veca.at(i) && vecb.at(i) ) ;
    }
    cout << endl;
    for(int i=31; i > -1; i--){
        cout << (veca.at(i) || vecb.at(i));
        //if(veca.at(i) || vecb.at(i) ) cout << "1";
        //else cout << "0";
    }
    cout << endl;
    for(int i=31; i > -1;i--){
        if(veca.at(i) == vecb.at(i)) cout << "0";
        else cout << "1";
    }
   cout << endl; 
}