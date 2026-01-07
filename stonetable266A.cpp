#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

#define FOR(i, a) for (int i=1; i<a; i++)
#define pb push_back

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    FOR(i,n){
        if(s[i]==s[i-1])count++;
    }
    cout << count;
    return 0;
}
