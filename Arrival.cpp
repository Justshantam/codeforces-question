#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100]; cin >> n;
    int max =0, min =0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > a[max]){max = i;}
        if(a[i] <= a[min]){min = i;}
    }
    //n-1 is max index position and - 0 is for understandig
    //if min < max satisfies 1 will be subtracted
    cout << (n-1) - min + max - 0 - (min < max);
    return 0;
}

/*
int n,a,cnt=0;
cin >> n;
vector<int> s;
for(int i=0; i<n; i++){
    cin >> a;
    s.push_back(a);
}
for(int i=1; i<s.size(); i++){
    if(s[i] > s[i-1]){
        swap(s[i-1], s[i]);
        cnt += 1;
    }
    else{
        continue;
    }
}
for(int i=s.size()-2; i>=0; i--){
    if(s[i] < s[i+1]){
        swap(s[i+1], s[i]);
        cnt += 1;
    }
    else{
        continue;
    }
}
cout << cnt;
*/
