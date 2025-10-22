#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define pb(a) push_back(a)
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> cubes(n);
    for(int i = 0; i < n; i++){
        cin >> cubes[i];
    }

    multiset<int> s;
    
    for(int i = 0; i < n; i++){
        if(s.upper_bound(cubes[i])  == s.end()){
            s.insert(cubes[i]);
        }
        else{
            s.erase(s.upper_bound(cubes[i]));
            s.insert(cubes[i]);
        }
    }

    cout << sz(s) << '\n';
    return 0;
}