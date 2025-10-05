#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define MAXN 1000001
#define pb(a) push_back(a)
#define ll long long
using namespace std;

vector<int> dp(MAXN, 0);

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, windowSz;
    cin >> n >> windowSz;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;
    vector<ll> elements(n);
    elements[0] = x;
    for(int i = 1; i < n; i++){
        elements[i] = (a*elements[i-1] + b)%c;
    }
    
    vector<ll> minis;
    deque<ll> dq;

    for(int i = 0; i < n; i++){
        while(!dq.empty() && dq.front() <= i-windowSz){
            dq.pop_front();
        }
        while(!dq.empty() && elements[i] <= elements[dq.back()]){
            dq.pop_back();
        }

        dq.pb(i);

        if(i >= windowSz-1){
            minis.pb(elements[dq.front()]);
        }
    }

    ll ans = 0;
    for(ll mini : minis){
        ans ^=mini;
    }
    cout << ans << '\n';
    return 0;
}