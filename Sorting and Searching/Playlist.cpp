#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<ll> songs(n);
    for(int i = 0; i < n; i++){
        cin >> songs[i];
    }

    int ans = 0;
    
    set<ll> s;

    int i, j;
    i = j = 0;
    while(i < n && j < n){
        if(s.find(songs[j]) == s.end()){
            s.insert(songs[j]);
            j++;
            ans = max(ans, j - i);
        }
        else{
            s.erase(songs[i]);
            i++;
        }
    }
    cout << ans << '\n';
    return 0;
}