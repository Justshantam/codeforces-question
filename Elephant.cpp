#include <iostream>
using namespace std;

int main() {
    long long int n, cnt = 0;
    cin >> n;
    if(n % 5 == 0){
        cout << n/5;
    }else{
        cout << n/5+1;
    }
    return 0;
}
