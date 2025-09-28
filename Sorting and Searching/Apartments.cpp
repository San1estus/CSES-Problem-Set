#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> applicants(n), apartments(m);
    for(int i = 0; i < n; i++){
        cin >> applicants[i];
    }
    for(int i = 0; i < m; i++){
        cin >> apartments[i];
    }
    sort(all(applicants));
    sort(all(apartments));
    int ans = 0;
    int applicant = 0, apartment = 0;
    while(applicant < n && apartment < m){
        if(applicants[applicant] - x > apartments[apartment]) apartment++;
        if(applicants[applicant] + x < apartments[apartment]) applicant++;
        if(applicants[applicant] + x >= apartments[apartment] && applicants[applicant] - x <= apartments[apartment]){
            ans++;
            applicant++;
            apartment++;
        }
    }
    
    cout << ans << '\n';

    return 0;
}