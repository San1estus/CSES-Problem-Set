#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;


int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    queue<ll> children;
    for(int i = 1; i <= n; i++){
        children.push(i);
    }

    bool flag = false;
    while(!children.empty()){
        ll child = children.front();
        children.pop();

        if(flag){
            cout << child << " ";
        }
        else children.push(child);
        flag = !flag;
    }
    return 0;
}