#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define pb(a) push_back(a)
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, windowSz;
    cin >> n >> windowSz;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;
    vector<ll> elements(n); 
    elements[0] = x;
    for(int i = 1; i < n; i++){
        elements[i] = (a*elements[i-1] + b)%c;
    }

    vector<ll> xors;
    ll current = 0;
    for(int i = 0; i < windowSz; i++){
        current ^= elements[i];
    }

    xors.pb(current);

    for(int i = windowSz; i < n; i++){
        current ^= elements[i-windowSz];
        current ^= elements[i];
        xors.pb(current);
    }
    ll ans = 0;
    for(ll val : xors){
        ans ^= val;
    }

    cout << ans << '\n';
    
    return 0;
}