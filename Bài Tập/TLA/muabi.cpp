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
    ll n,m;
    cin >> n >>m ;
    vector<pair<ll,ll>> a(m) ;
    for (auto&it:a) cin >> it.se >> it.fi ;
    sort(all(a));
    reverse(all(a)) ;
    ll ans = 0 ;
    
    for (int i =0 ; i < m  ;i++) {
        ll tmp = min(n,a[i].se) ;
        n-=tmp;
        ans+=tmp*a[i].fi;
        
    }
    cout << ans;
    return 0;
}
