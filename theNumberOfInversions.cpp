#include <bits/stdc++.h>
using namespace std;
typedef struct bit{
    vector<int> vec;
    int n;
    bit(int num) :vec(num+1,0){ n = num;}
    void add(int i, int w){
        if(i == 0) return;
        for(int k = i; k<=n; k+=(k & -k)){
            //LSBをとって、加算
            vec[k] +=w;
        }
    }
    int sum(int i){
        int s = 0;
        if(i == 0) return s;
        for(int k = i; k>0 ; k-=(k &-k)){
        //LSBを取って減算
            s+=vec[k];
        }
        return s;
    }
}BIT;


int main(){
    int n;
    cin >> n;
    BIT bit(n);
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += i - bit.sum(a[i]);
        bit.add(a[i], 1);
    }
    cout << ans << endl;
}

//これだと、作成する配列の数が要素の最大値+1になってしまう。
//そのため、受け取るnumの要素数のBITを作る。
// 受け取った数をソートして、ソートしたあとのindexで考える。indexは1刻みの昇順のリストで、
//a[受け取った数字のindex] = ソートした配列のindex としてあげるとBITで作る配列の数を減らせる。
//2の方に実装例を載せた。

https://kira000.hatenadiary.jp/entry/2019/02/23/053917
https://coonevo.hatenablog.com/entry/2020/03/19/174849