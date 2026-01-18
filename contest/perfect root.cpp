#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            long long x = 1LL * i * i;
            cout << x << (i == n ? '\n' : ' ');
        }
    }
    return 0;
}
