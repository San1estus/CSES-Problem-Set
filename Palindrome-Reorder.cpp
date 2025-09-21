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
    int n = sz(s);
    int arr[26] = {0};

    for(int i = 0; i < n; i++){
        arr[s[i]-'A']++;
    }

    bool flag = false;
    int idx;
    for(int i = 0; i < 26; i++){
        if(arr[i]%2){
            if(flag) {
            cout << "NO SOLUTION\n";
            return 0;
            }
            flag = true;
            idx = i;
        }
    }    
    for(int i = 0; i < 26; i++){
        if(i!=idx){
            for(int j = 0; j < arr[i]/2; j++){
                cout << char('A'+i);
            }
        }
    }
    
    for(int i =0; i < arr[idx]; i++){
        cout << char('A'+idx);
    }

    for(int i = 25; i >= 0; i--){
        if(i!=idx){
            for(int j = 0; j < arr[i]/2; j++){
                cout << char('A'+i);
            }
        }
    }
    cout << '\n';
    return 0;
}