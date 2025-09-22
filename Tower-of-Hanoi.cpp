#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
using namespace std;

void movement(int n, vector<pair<int,int>> &moves, int source = 1, int aux = 2, int destiny = 3){
    if(n == 1){
        moves.push_back({source, destiny});
        return;
    }

    movement(n-1, moves, source, destiny, aux); 
    moves.push_back({source, destiny});
    movement(n-1, moves, aux, source, destiny);
}


int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    
    vector<pair<int,int>> moves;
    movement(n, moves, 1, 2, 3);
    cout << sz(moves) << '\n';
    for(auto move : moves){
        cout << move.first <<' '<< move.second << '\n';
    }
    return 0;
}