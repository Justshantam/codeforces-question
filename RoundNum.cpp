#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n,d=10; cin >> n;
        vector<int> s;
        while (n)
        {
            if(n%d){
                s.push_back(n%d);
                n -= (n%d);
            }
            d = d*10;
        }
        cout << s.size() << endl;
        for(auto x : s){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
