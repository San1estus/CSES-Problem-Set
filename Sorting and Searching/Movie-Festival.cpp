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
    int n, a, b, ans = 0;
    cin >> n;
    vector<pair<int,int>> movies(n);
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        movies[i] = {a, b};
    }
    
    sort(all(movies), [](pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    });

    int temp = 0;
    for(int i = 0; i < n; i++){
        if(temp <= movies[i].first){
            ans++;
            temp = movies[i].second;
        }
    }

    cout << ans << '\n';
    return 0;
}