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
    int n, num;
    cin >> n;
    vector<int> indices(n+1);
    for(int i =0; i < n; i++){
        cin >> num;
        indices[num] = i;
    }
    
    int ans = 1;
    for(int i = 1 ;i < n; i++){
        if(indices[i+1] < indices[i]){
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}