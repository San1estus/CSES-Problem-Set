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
    cin >> n;
    int a;
    set<int> uniques;
    for(int i =0; i < n; i++){
        cin >> a;
        uniques.insert(a);
    }
    cout << sz(uniques) << '\n';
    return 0;
}