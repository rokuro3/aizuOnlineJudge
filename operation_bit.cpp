#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin >> a >> b;
    bitset<32> x(a), y(b);
    cout << (x&y) << endl;
    cout << (x | y) << endl;
    cout << (x ^ y) << endl;
    return 0;
}