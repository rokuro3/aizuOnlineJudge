#include <bits/stdc++.h>
using namespace std;

void koch(int n, vector<float> &p1, vector<float> &p2){
    if (n==0)   return;
    vector<float> s(2);
    vector<float> t(2);
    vector<float> u(2);
    s[0] = (p1[0]*2 + p2[0])/3;
    s[1] = (p1[1]*2 + p2[1])/3;
    t[0] = (p1[0] + p2[0]*2)/3;
    t[1] = (p1[1] + p2[1]*2)/3;
    u[0] = (t[0] - s[0]) * cos(M_PI/3) - (t[1] - s[1]) * sin(M_PI/3) + s[0];
    u[1] = (t[0] - s[0]) * sin(M_PI/3) + (t[1] - s[1]) * cos(M_PI/3) + s[1];

    koch(n-1, p1, s);
    cout << fixed << setprecision(8) << s[0] << " " << s[1] << endl;
    koch(n-1, s, u);
    cout << fixed << setprecision(8) << u[0] << " " << u[1] << endl;
    koch(n-1, u, t);
    cout <<  fixed << setprecision(8) <<t[0] << " " << t[1] << endl;
    koch(n-1, t, p2);
}

int main(){
    int n;
    cin >> n;
    vector<float> b(2);
    b[0] = b[1] = 0.0;
    vector<float> e(2);
    e[0] = 100.0;
    e[1] = 0.0;
    cout  << fixed << setprecision(8) <<b[0] << " " << b[1] << endl;
    koch(n,b,e);
    cout  << fixed << setprecision(8) << e[0] << " " << e[1] << endl;
}