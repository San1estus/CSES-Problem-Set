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
    int n, a, b;
    cin >> n;
    vector<pair<int,int>> customers(2*n);
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        customers[i] = {a, 1};
        customers[2*n-1-i] = {b, -1};
    }
    sort(all(customers));

    int current, maxOAT;
    current = maxOAT = 0;
    for(pair<int,int> customer : customers){
        current += customer.second;
        maxOAT = max(maxOAT, current);
    }

    cout << maxOAT << '\n';
    return 0;
}