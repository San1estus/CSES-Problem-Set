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
    int n, x;
    cin >> n >> x;
    vector<ll> dp(MAXN, 0);
    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= x; j++){
            if(j >= coins[i-1]){
                dp[j] = (dp[j] + dp[j-coins[i-1]])%MOD;          
            }
        }
    }
    cout << dp[x] << '\n';
    return 0;
}