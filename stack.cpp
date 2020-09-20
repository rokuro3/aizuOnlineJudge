#include <bits/stdc++.h>
using namespace std;
//逆ポーランド記法
int main(){
    stack<string> st;
    string tmp;
    while(cin >> tmp){

        if(isdigit(tmp[0])){
            st.push(tmp);
        }
        else{
            int num1 = atoi(st.top().c_str()); st.pop();
            int num2 = atoi(st.top().c_str()); st.pop();
            if(tmp == "+"){
                st.push(to_string(num1 + num2));
            }
            if(tmp == "*"){
                st.push(to_string(num1 * num2));
            }
             if(tmp == "-"){
                st.push(to_string(num2 - num1));
            }
        }
    }
    cout << st.top() << endl;
}