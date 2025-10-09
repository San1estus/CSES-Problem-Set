#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;


int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ll> dp(MAXN, 1e9);

    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        ll temp = i;
        while(temp){
            ll digit = temp%10;
            dp[i] = min(dp[i], 1+dp[i-digit]);
            temp /= 10;
        }
    }

    cout << dp[n] << '\n';

    return 0;
}