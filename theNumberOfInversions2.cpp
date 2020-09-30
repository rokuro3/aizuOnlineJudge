#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cnt;
void merge(vector<ll> &A, ll left, ll mid, ll right){
    ll n1 = mid - left;
    ll n2 = right - mid;
    vector<ll> L(n1+1);
    vector<ll> R(n2+1);
    for(ll i = 0;i < n1; i++)
        L[i] = A[left + i];
    for(ll i = 0; i < n2; i++)
        R[i] = A[mid + i];
    L[n1] = 1000000000;
    R[n2] = 1000000000;
    ll i=0, j=0;
    for(ll k = left ; k < right ; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            cnt += n1 - i;
            A[k] = R[j];
            j++;
        }
    }
}
void mergeSort(vector<ll> &A, ll left , ll right){
    if (left+1 < right){
        ll mid = (left + right)/2;
        mergeSort(A,left, mid);
        mergeSort(A,mid, right);
        merge(A, left, mid, right);
    }
}

int main(){
    cnt = 0;
    ll n;
    cin >> n;
    vector<ll> A(n);
    for(ll i=0; i < n; i++)
        cin >> A[i];
    mergeSort(A, 0, n);
    /*
    for(ll i=0; i < n-1; i++){
        cout << A[i] << " ";
    }
    cout << A[n-1] << endl;
    */
    cout << cnt << endl;
}