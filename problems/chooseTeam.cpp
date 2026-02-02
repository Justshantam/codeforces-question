#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, y, cnt=0;
    cin >> n >> k;
    while(n--){
        cin >> y;
        if(y <= 5-k) cnt ++;
    }
    cout << cnt/3;
    return 0;
}
