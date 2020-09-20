#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &A, int n, int g, int &cnt){ //ベクターは参照渡ししないと、値を変えてくれないらしい。
    for(int i=g; i<n; i++){
        int v = A[i];
        int j = i -g;
        while(j >= 0 && A[j] > v)
        {
            A[j+g] = A[j];
            j -= g;
            cnt++;
        }
        A[j+g] = v;
    }
}

void shellSort(vector<int> &A, int n){
    int cnt = 0;
    vector<int> h; 
    h.push_back(1);
    for( int htmp = 4; htmp < (int)n/9; htmp = htmp*3 + 1){
        h.push_back(htmp);
    }
    int m = (int)h.size();
    cout << m << endl;
    for(int i= m -1; i > 0; i--){
        cout << h.at(i) << " ";
    }
    cout << h.at(0) << endl;
    for(int i = m-1; i >= 0; i--){
        insertionSort(A, n, h.at(i), cnt);
    }
    cout << cnt << endl;
    for(size_t i=0; i < A.size(); i++){
        cout << A[i] << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    shellSort(A,n);
}