#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long n;
    cin >> n;

    unsigned long long sum = 0, a;

    for(int i = 0; i < n-1; i++){
        cin >> a;
        sum+=a;
    }
    cout << (n*(n+1)/2) - sum << '\n';
    return 0;
}