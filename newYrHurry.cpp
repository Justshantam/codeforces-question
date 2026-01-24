#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int available = 240 - k;
    int timeSpent = 0;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        timeSpent += 5 * i;
        if (timeSpent > available)
            break;
        solved++;
    }
    cout << solved << endl;
    return 0;
}
