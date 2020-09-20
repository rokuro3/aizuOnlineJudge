#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &vec,int searchNum){
    vector<int> cp = vec;
    cp.push_back(searchNum);
    int i=0;
    while(cp[i] != searchNum){
        i++;
    }
    if( (i+1) == (int)cp.size()){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> vecn(n);
    for(int i=0; i<n; i++){
        cin >> vecn[i];
    }
    int q;
    cin >> q;
    int num = 0;
    for(int i=0;i<q;i++){
        int searchNum;
        cin >> searchNum;
        num += linearSearch(vecn, searchNum);
    }
    cout << num << endl;
}