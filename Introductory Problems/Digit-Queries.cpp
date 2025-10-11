#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;

ll binaryExponentiation(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b&1){
            res = res*a;
        }

        a *= a;
        b >>= 1;
    }

    return res;
}


int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int q;
    cin >> q;
    while(q--){
        ll k;
        cin >> k;
        ll digits = 1, base = 9;
        while(k-digits*base > 0){
            k -= digits*base;
            base *=10;
            digits++;
        }

        ll index = k % digits;
        ll res = binaryExponentiation(10, (digits-1))+(k-1)/digits;

        if(index != 0){
            res = res/binaryExponentiation(10, digits-index);
        }
        cout << res%10 << '\n';
    }   

    return 0;
}