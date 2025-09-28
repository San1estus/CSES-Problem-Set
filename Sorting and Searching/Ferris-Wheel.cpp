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
    int n, x;
    cin >> n >> x;
    vector<int> weights(n);
    for(int i = 0; i < n; i++){
        cin >> weights[i];
    }
    int ans = 0;
    sort(all(weights));
    int currentWeight = 0;
    int l, r;
    l = 0; r = n-1;
    while(l<=r){
        ans++;
        if(currentWeight+weights[r] <= x){
            currentWeight+=weights[r];
            r--;
        }

        if(currentWeight + weights[l] <= x){
            currentWeight += weights[l];
            l++;
        }
        
        currentWeight = 0;
    }
    cout << ans << '\n';
    return 0;
}