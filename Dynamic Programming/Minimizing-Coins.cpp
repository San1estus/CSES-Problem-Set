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
    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    vector<ll> dp(x+1, INT_MAX);
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
        for(int weight = coins[i-1]; weight <= x; weight++){
            dp[weight] = min(dp[weight], dp[weight-coins[i-1]] + 1);
        }
    }
    cout << (dp[x] == INT_MAX ? -1 :dp[x]) << '\n';
    return 0;
}