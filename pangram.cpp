#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> s;
    for(int i=0; i<n; i++){
        char c; cin >>c;
        s.insert(tolower(c));
    }
    cout << (s.size() == 26? "YES": "NO");
    return 0;
}
