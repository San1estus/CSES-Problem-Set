#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define ll long long
using namespace std;

ll minDiff(int index, ll a, ll b, vector<ll> &arr, int n){
    if(index == n){
        return abs(a-b);
    }
    ll choose = minDiff(index+1, a+arr[index], b, arr, n);
    ll notChoose = minDiff(index+1, a, b+arr[index], arr, n);
    
    return min(choose, notChoose);
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    vector<ll> arr(n);
    unsigned long long sum = 0, minSum = 0, temp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << minDiff(0,0,0, arr, n) << '\n';
    return 0;
}