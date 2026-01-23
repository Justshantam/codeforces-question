#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int s; cin >> s;
    int min = s, max = s, cnt = 0;
    while(n--){
        cin >> s;
        if(s > max){
            max = s;
            cnt++;
        }
        if(s < min){
            min = s;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
