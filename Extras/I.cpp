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
    int l, r;
    cin >>l >> r;
    int dist = r-l+1;
    string s;
    vector<pair<int,int>> arr;
    for(int i = 0; i < dist; i++){
        cin >> s;
        if(s == "Fizz"){
            arr.push_back({l+i, 0});
        }
        if(s == "Buzz"){
            arr.push_back({l+i, 1});
        }
        if(s == "FizzBuzz"){
            arr.push_back({l+i, 2});
        }
    }
    
    return 0;
}