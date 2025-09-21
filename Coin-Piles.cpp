#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  a.size()
#define MOD 1000000007
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        unsigned long long a, b;
        cin >> a >> b;
        
        if((2*a-b)%3 || (2*b-a)%3 || (2*a-b)<0 || (2*b-a)<0)  cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}