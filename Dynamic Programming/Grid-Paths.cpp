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
    vector<vector<char>> grid(n, vector<char>(n));

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    vector<vector<ll>> dp(n, vector<ll>(n, 0));


    for(int i = 0; i < n; i++){
        if(grid[i][0] == '*') break;
        dp[i][0] = 1;
    }

    for(int j = 0; j < n; j++){
        if(grid[0][j] == '*') break;
        dp[0][j] = 1;
    }

    for(int i =1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(grid[i][j] == '*') continue;
            dp[i][j] = (dp[i-1][j]+dp[i][j-1])%MOD;
        }
    }
    cout << dp[n-1][n-1] << '\n';
    return 0;
}