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
    int n;
    cin >> n ;
    vector<ll> a(n) ;
    for (auto&it:a) cin >> it ;
    sort(all(a)) ;
    ll ans = a[n-1]*a[n-2]*a[n-3];
    ans = max({a[0]*a[1]*a[n-1] ,ans});
    cout << ans;
    return 0;
}
