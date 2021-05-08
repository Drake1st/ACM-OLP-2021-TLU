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
    
    vector<ll> a ;
    
    for (ll i = 1 ; i <= 9 ; i++) {
        ll c = i ;
        
        while ( c < MOD) {
            a.pb(c) ;
            c = c*10+i;
        }
        
    }
    sort(all(a)) ;
    //cout << a.back() ;
    int tt ;
    cin >>tt ;
    while(tt--) {
        ll n ;
        int ans =0 ;
        cin >> n ;
        for (int i = 0 ; i < a.size() ; i++)
            if ( n >= a[i])
                ans++;
        cout << ans<<nl;
    }
   
    return 0;
}
