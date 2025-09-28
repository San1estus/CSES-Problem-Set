#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  a.size()
#define MOD 1000000007
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, ans=0;
    cin >> n;
    while(n){
        ans+=n/5;
        n/=5;
    }
    cout << ans;
    return 0;
}