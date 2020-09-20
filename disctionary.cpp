#include <bits/stdc++.h>
using namespace std;
typedef map<string,bool> vecp;

#define M 1000000
#define L 14


void insert(vecp &v, string str){
   v.insert(make_pair(str,true)); 
}
bool find1(vecp &v, string str){
    return v.count(str);
}

int main(){
    int i, n;
    char str[L], com[9];
    vecp vec;
    
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);
	
	if ( com[0] == 'i' ){
	    insert(vec,str);
	} else {
	    if (find1(vec,str)){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}