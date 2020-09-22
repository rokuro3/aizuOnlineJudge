#include <bits/stdc++.h>
using namespace std;

//i番目移行の要素を選ぶか選ばないかmを作れる場合trueを返す
//bool solve(vector<int> S, int n, int i, int m)
//参照渡しにしないと、再帰的にvectorをコピーするので時間が取られる。
bool solve(vector<int> &S, int n, int i, int m){
    if (!m) return true;
    if (i >= n) return false;
    bool res = solve(S, n, i+1, m) || solve(S, n, i+1, m - S[i]);
    //1つ目はi番目の要素を使わないことに対応
    //2つ目はi番目の要素を使うことに対応
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> A(20);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    int q;
    cin >> q;
    for(int i=0; i<q ; i++){
        int tmp;
        cin >> tmp;
        cout <<  (solve(A, n, 0, tmp) ? "yes" : "no") << endl;
    }
        

}