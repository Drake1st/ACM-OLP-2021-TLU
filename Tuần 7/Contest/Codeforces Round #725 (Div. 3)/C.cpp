#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    
    int tt ;
    cin >> tt;
    while(tt--) {
        int n , l , r;
        cin >> n >> l >> r ;
        
        int a[n+1] ;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll ans =0 ;
        sort(a, a + n );
        for (int i = 0; i < n - 1; i++) {
            int j = lower_bound(a + i + 1, a + n, l - a[i]) - a;
            int k = upper_bound(a + i + 1, a + n, r - a[i]) - a;
            ans += (k - j);
        }
        cout << ans << nl;
            
    }
    
    return 0;
}
