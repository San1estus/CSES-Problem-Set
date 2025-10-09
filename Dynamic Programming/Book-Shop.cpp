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

    vector<pair<int,int>> booksPages(n);
    
    for(int i = 0; i < n; i++){
        cin >> booksPages[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> booksPages[i].second;
    }

    vector<ll> dp(x+1, 0);
    for(int i = 0; i < n; i++){
        for(int j = x; j>0; j--){
            if(booksPages[i].first > j) continue;
            dp[j] = max(dp[j], booksPages[i].second + dp[j-booksPages[i].first]);
        }
    }

    cout << dp[x] << '\n';

    return 0;
}