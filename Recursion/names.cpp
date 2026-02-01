#include <bits/stdc++.h>
using namespace std;
void names(int n){
    if(n == 0)return;
    printf("Shantam");
    names(n- 1);
};
int main() {
    int n; cin >> n;
    names(n);
    return 0;
}
