#include <bits/stdc++.h>
using namespace std;

bool cal(int n){
    if(n == 2){
        return true;
    }
    if(n == 1 || !(n%2)){
        return false;
    }
    for(int j = 3; j<=(int)sqrt(n); j+=2){
        if(!(n%j)) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i< n; i++){
        cin >> A[i];
    }   
    int num=0;
    for(int i=0;i<n; i++){
        num+=cal(A[i]);
    }
    cout << num << endl;
}