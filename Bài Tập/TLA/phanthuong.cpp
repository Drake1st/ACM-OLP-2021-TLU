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
    int m,n,w,h;
    cin >> m >> n >> w >> h ;
    vector<ll> a(m) ;
    vector<ll> b(n) ;
    for (auto&it:a) cin >> it ;
    for (auto&it:b) cin >> it ;
    

    for (int i =1 ; i < m ; i++)
        a[i]+=a[i-1] ;
    for (int i = 1 ; i < n ; i++)
        b[i]+=b[i-1] ;
    
    ll ans1 = a[w-1] , ans2 = b[h-1] ;
    
    for (int i = 1 ; i <= m - w; i++) 
        ans1 = max(ans1,a[i+w-1]-a[i-1] ) ;
        //cout << i <<" "<<i+w-1<<nl;

    
    for (int i = 1 ; i <= n - h; i++) 
        ans2 = max(ans2,b[i+h-1]-b[i-1] ) ;
       

    
    
    
    cout << ans1*h+ans2*w;
    
    return 0;
}
