#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0, max = 0;
    while (n--){
        int out,inn;
        cin >> out >> inn;
        cnt += inn - out;
        if(cnt > max) max = cnt;
    }
    cout << max << endl;
    return 0;
}
