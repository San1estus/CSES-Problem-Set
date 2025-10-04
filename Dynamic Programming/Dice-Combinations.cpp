#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;

vector<int> dp(MAXN, 0);

int solution(int n){
    if(dp[n] != 0) return dp[n];
    for(int i = 1; i <= 6; i++){
        if(n >= i){
            dp[n] += solution(n-i);
            dp[n] %= MOD;
        }
    }

    return dp[n];
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    dp[0] = 1;
    cout << solution(n) << '\n';
    return 0;
}