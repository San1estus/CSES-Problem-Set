#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    vector<string> ans;
    sort(all(s));
    do{
        ans.push_back(s);
    }while(next_permutation(all(s)));

    sort(all(ans));

    cout << sz(ans) << '\n';
    for(string perm : ans){
        cout << perm << '\n';
    }
    return 0;
}