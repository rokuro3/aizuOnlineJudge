#include <bits/stdc++.h>
using namespace std;


int main(){
    long i;
    cin >> i;
    vector<bool> vec;
    while(1){
        vec.push_back(i%2);
        i = i/2;
        if(!i) break;
    }
    long size = (long)vec.size();
    for(long i=0; i< 32 - size; i++){
        vec.push_back(0);
    }
    for(auto itr = vec.rbegin(); itr != vec.rend(); ++itr){
        cout << *itr ;
    }
    cout << endl;
    //bit反転
    for(auto itr =vec.rbegin(); itr != vec.rend(); ++itr){
        cout << !*itr;
    }
    cout << endl;
    //左シフト
    for(auto itr =vec.rbegin()+1; itr != vec.rend(); ++itr){
        cout << *itr;
    }
    cout << "0" << endl;
    //右シフト
    cout << "0";
    for(auto itr = vec.rbegin() ; itr != vec.rend() -1; ++itr){
        cout << *itr;
    }
    cout << endl;

}