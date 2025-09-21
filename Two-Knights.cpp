#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  a.size()
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long n, m=0;
    cin >> n;
    while(m!=n){
        m++;
        if(m == 1) {cout << 0 << '\n';continue;}
        unsigned long long ans = 0;
        ans += (m*m)*(m*m-1)/2-4*(m-1)*(m-2);  // Posicionamientos posibles - no validos.
        cout << ans << '\n';
    }
    
    return 0;
}