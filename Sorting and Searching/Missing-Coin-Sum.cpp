#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    ll minSum = 1;
    sort(all(coins));
    for(auto coin:coins){
        if(coin > minSum){
            break;
        }
        minSum+=coin;
    }
    cout << minSum << '\n';
    return 0;
}