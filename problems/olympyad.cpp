#include <bits/stdc++.h>
using namespace std;

vector<int> ind[4];
int c[4];
int main() {
    int n, t, w;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> t;
        ind[t].push_back(i);
        c[t]++;
    }
    w = min(c[1], min(c[2], c[3]));
    cout << w << endl;
    for(int i=0; i<w; i++){
        cout << ind[1][i] << " " << ind[2][i] << " " << ind[3][i] << endl;
    }
    return 0;
}
