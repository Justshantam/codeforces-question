#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    vector<int> p;
    p.push_back(x);
    p.push_back(y);
    p.push_back(z);
    sort(p.begin(), p.end());
    int result = 0;
    result += abs(p[1] - p[0]);
    result += abs(p[1] - p[2]);
    cout << result;
    return 0;
}
