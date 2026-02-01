#include <bits/stdc++.h>
using namespace std;
int a[1000] , output[2];
int main() {
    int n; cin >> n;
    int l=0, r = n-1;
    for(int i=0; i<n; i++){cin >> a[i];}
    for(int i=0; i<n; i++){
        if(a[l] > a[r]){
            output[i%2] += a[l];
            l++;
        }else{
            output[i%2] += a[r];
            r--;
        }
    }
    cout << output[0] <<" "<< output[1];
    return 0;
}
