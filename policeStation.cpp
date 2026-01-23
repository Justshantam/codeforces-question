#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], count = 0, cops = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] == -1 && cops == 0){count++;}
        else if(a[i] != -1){cops += a[i];}
        else cops--;
    }
    cout << count;
    return 0;
}
