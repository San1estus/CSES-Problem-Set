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
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    int maxPrice;
    for(int i = 0; i < n; i++){
        cin >> maxPrice;
        tickets.insert(maxPrice);
    }
    for(int i = 0; i < m; i++){
        cin >> maxPrice;
        auto it = tickets.upper_bound(maxPrice);
        if(it == tickets.begin()) cout << -1 << '\n';
        else{
            cout << *(--it) << '\n'; 
            tickets.erase(it);
        }
    }
    return 0;
}