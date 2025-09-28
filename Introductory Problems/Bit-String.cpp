#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  a.size()
#define MOD 1000000007
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long n, ans = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        ans = (ans*2)%MOD;
    }
    cout << ans;
    return 0;
}