#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> A;
    int a;
    for(int i=0;i < n;i++){
        cin >> a;
        A.push_back(a);
    }
    int num = 0;
    for(int i=1; i< n;i++){
        int v = A[i];
        int j= i-1;
        for(; (j != -1) && A[j] > v; j--){
            A[j+1] = A[j];
        }
        A[j+1] = v;
        num++;
    }

    cout << A[0];
    for(int j=1;j<n;j++){
        cout << " " << A[j];
    }
    cout << endl;
    cout << num << endl;
}