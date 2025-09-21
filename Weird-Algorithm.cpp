#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long n;
    cin >> n;
    while(n-1){
        cout << n << ' ';
        n = (n%2 ? n*3+1 : n/2);
    }
    cout << 1;
    return 0;
}