#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    cin >> n;
    bool easy = true;
    for(int i = 0; i < n; i++){
        cin >> p;
        if(p == 0)continue;
        else easy = false;
    }
    cout << (easy? "EASY" : "HARD");
    return 0;
}
