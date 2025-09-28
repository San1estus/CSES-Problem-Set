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
    int n, x, val;
    cin >> n >> x;
    unordered_map<int, int> values;
    for(int i = 0; i < n; i++){
        cin >> val;
        if(values.count(x-val)){
            cout << values[x-val]+1 << " " << i+1 << '\n';
            return 0;
        }
        values[val] = i;
    }
    cout << "IMPOSSIBLE\n"; 

    return 0;
}