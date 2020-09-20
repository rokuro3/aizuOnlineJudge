#include <bits/stdc++.h>
using namespace std;

struct dlList {
    vector<int> vec;
    void insert(int x){
        if(vec.size()){
            vec.push_back(vec.back());
            for(size_t i=vec.size()-1; i > 0; i--){
             vec[i] = vec[i-1];    
            }
            vec[0] = x;
        }
        else
            vec.push_back(x);
    }
     void delete1(int x){
        for(int i=0 ; i < (int)vec.size() ; i++){
            if( vec[i] == x){
                for(int j = i; j < (int)vec.size()-1 ; j++){
                    vec[j] = vec[j+1];
                }
                vec.pop_back();
                break;
            }
        }
    }
    void deleteFirst(void){
        for(int i=0; i< (int)vec.size()-1 ;i++){
            vec[i] = vec[i+1];
        }
        vec.pop_back();
    }
    void deleteLast(void){
        vec.pop_back();
    }
    void end(){
        for(int i=0; i<(int)vec.size()-1; i++){
            cout << vec[i] << " " ;
        }
        cout << vec[vec.size()-1] << endl;
    }
};
int main(){
    int n;
    cin >> n;
    struct dlList dll;
    for(int i=0 ; i < n; i++ ){
        string st;
        int key;
        cin >> st;
        if(st == "insert"){
            cin >> key;
            dll.insert(key);
        }
        if(st == "delete"){
            cin >> key;
            dll.delete1(key);
        }
        if(st == "deleteFirst"){
            dll.deleteFirst();
        }   
        if(st == "deleteLast"){
            dll.deleteLast();
        }
    }
    dll.end();
}