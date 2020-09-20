#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin >> n;
 int ar[n];
 for(int i=0;i<n;i++){
     cin >> ar[i];
 }   

 for(int i=1;i<n;i++){
     int v = ar[i];
     int j = i-1;
     for(; j > -1 && ar[j] > v; j--){
         ar[j+1] = ar[j];
     }
     ar[j+1] = v;
     cout << ar[0];
     for(int j=1; j<n;j++)
        cout << " " << ar[j];
    cout << endl;
 }
}