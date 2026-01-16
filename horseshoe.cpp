#include <bits/stdc++.h>
using namespace std;
/*
int a[4], count = 0;
for(int i = 0; i<4; i++){
    cin >> a[i];
}
sort(a,a+4);
for(int i=1; i<4; i++){
    if(a[i-1] == a[i]){
        count++;
    }
}
cout<<count;
return 0;
*/
//property of set it it does not consider repeated nums.
int main() {
    set<int> s;
    for(int i = 0; i < 4; i++){
        int n;
        cin >> n;
        s.insert(n);
    }
    cout << (4-s.size());
}
