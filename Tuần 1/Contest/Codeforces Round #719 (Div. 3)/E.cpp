#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)
using namespace std;
typedef long long ll;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt ;
    cin >> tt ;
    while(tt--) {
        int n;
        string s;
        cin >> n >> s;
 
        int prefix = 0;
        vector<int> a;
        for (int i = 0; i < n; i++) 
            if (s[i] == '*') {
                a.pb(i - prefix);
                ++prefix;
            }
        
 
        int m = a.size();
        ll ans = 0;
        for (int i = 0; i < m; ++i) {
            ans += abs(a[m / 2] - a[i]);
        }
 
        cout << ans <<nl;
        
    }
   
    return 0;
}
