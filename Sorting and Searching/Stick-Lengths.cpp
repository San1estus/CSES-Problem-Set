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
    ll n, ans = 0;
    cin >> n;
    vector<int> lengths(n);
    for(int i = 0; i < n; i++){
        cin >> lengths[i];
    }
    sort(all(lengths));

    int mid = (n+1)/2-1;
    int midValue = lengths[mid];
    for(int i = 0; i < n; i++){
        if(i == mid) continue;
        ans+=abs(midValue - lengths[i]);
    }
    cout << ans << '\n';
    return 0;
}