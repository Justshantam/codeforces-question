#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        //checking which number appeared how many times for MEX
        unordered_map<int, int> shantam;
        for(int i=0; i<n; i++){
            cin >> a[i];
            shantam[a[i]]++;
        }
        //agar 0 - n-1 tak rahega in line toh no hoga
        //agar repeat bhi ho rhe toh yes hai
        bool all_diff = true;
        for(int z=0; z<n; z++){
            //kya sare number 1 baar hi hai 0 - n-1 tak
            //agar hai toh no baki sare case toh yes hai
            if(shantam[z] != 1){
                all_diff = false;
                break;
            }
        }
        cout << (all_diff? "NO\n" : "YES\n");
    }
    return 0;
}
//unfinished
