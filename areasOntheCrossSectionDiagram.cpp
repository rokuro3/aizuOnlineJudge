#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<int> vec(s.size()+2);
    cout << s.size() << endl;
    vec[0] = 0;
    int height=0;
    for(int i=1; i < (int)s.size()+2; i++){
        if(s[i-1] == 92){
            height+=1;
            vec[i] = height;
        }
        if(s[i-1] == 47){
            height-=1;
            vec[i] =height;
        }
        else vec[i] = height;

        if(s[i-1] == 92 || s[i-1] == 95){
            int tmpV = -1;
            for(int j = i-2; j> -1; j--){
                
            }
        }
    }

    
    for(int i=0; i< (int)vec.size() -1; i++){
        cout << vec[i] << " ";
    }

}