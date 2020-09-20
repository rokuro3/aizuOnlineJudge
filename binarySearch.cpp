#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &vec,int key){
    int left = 0;
    int right = (int)vec.size();
    while(left < right){
        int mid = (left + right) /2;
        if (vec[mid] == key)
            return mid;
        else if (key < vec[mid])
            right = mid;
        else 
            left = mid +1;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> vecn(n);
    for(int i=0; i<n; i++){
        cin >> vecn[i];
    }
    int q;
    cin >> q;
    int num = 0;

    for(int i=0; i < q ; i++){
        int searchNum;
        cin >> searchNum;
        int tmp = (binarySearch(vecn, searchNum) == -1) ? 0 : 1;  
        num += tmp;
        //int tmp = binarySearch(vecn, searchNum);
        //if(tmp != -1) num++;
    }
    cout << num << endl;
}