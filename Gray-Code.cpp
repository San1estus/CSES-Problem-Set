#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
using namespace std;

vector<string> grayCode(int n){
    if (n == 1){
        return {"0", "1"};
    }
    vector<string> previous = grayCode(n-1);
    vector<string> reversedPrevious = previous;
    reverse(all(reversedPrevious));
    int prevSz = sz(previous);
    int index = 0;
    
    while(index < prevSz){
        string zero = "0" + previous[index];
        previous[index] = "1" + reversedPrevious[index];
        previous.push_back(zero);
        index++;
    }
    return previous;
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> ans = grayCode(n);
    
    for(string s: ans){
        cout << s << '\n';
    }
    return 0;
}