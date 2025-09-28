#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  a.size()
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = sz(s);
    int ans = 1, current = 1;
    char pointer;
    pointer = s[0];
    for(int i = 1; i < n; i++){
        if(pointer == s[i]){
            current++;
        }
        else{
            ans = max(ans, current);
            current = 1;
            pointer = s[i];
        }
    }
    ans = max(ans, current);
    cout << ans << '\n';
    return 0;
}