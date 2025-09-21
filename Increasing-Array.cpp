#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  a.size()
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    unsigned long long ans = 0;
    vector<unsigned long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i && arr[i] < arr[i-1]){ 
            ans += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << ans << '\n';
    return 0;
}