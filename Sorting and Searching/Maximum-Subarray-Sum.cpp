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
    ll sum = 0, maxSum = INT_MIN;
    cin >> n;
    vector<ll> values(n);
    for(int i = 0; i < n; i++){
        cin >> values[i];
        sum+=values[i];
        maxSum = max(maxSum, sum);

        if(sum < 0){
            sum = 0;
        }
    }

    cout << maxSum << '\n';
    return 0;
}