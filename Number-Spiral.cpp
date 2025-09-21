#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  a.size()
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        unsigned long long x, y;
        cin >> y >> x;
        unsigned long long ans = 1;
        if(x == 1 && y == 1) {cout << 1 <<'\n';continue;}
        
        ans += max(x,y)*(max(x,y)-1);

        ans = ans + (!(max(x,y)%2) ? -1 : 1)*(x-y);
        cout << ans << '\n';
    }
    
    return 0;
}