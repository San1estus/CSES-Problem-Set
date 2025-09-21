#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  a.size()
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long n;
    cin >> n;
    if((n*(n+1)/2)%2){
        cout << "NO\n";
        return 0;
    }
    unsigned long long aux =n*(n+1)/4;
    vector<bool> ans(n+1, false);
    int sizeBigs = 0;
    while(aux){
        if(aux >= n){
            sizeBigs++;
            aux -= n;
            ans[n--] = true;
        }
        else{
            ans[aux] = true;
            aux -= aux; 
            sizeBigs++;
        }
    }
    

    cout << "YES\n" << sizeBigs << '\n'; 
    n=sz(ans);
    for(int i = 1; i < n; i++){
        if(ans[i]) cout << i << ' ';
    }
    cout << '\n' <<n-1-sizeBigs << '\n';
    
    for(int i = 1; i < n; i++){
        if(!ans[i]) cout << i << ' ';
    }
    cout << '\n';
    return 0;
}