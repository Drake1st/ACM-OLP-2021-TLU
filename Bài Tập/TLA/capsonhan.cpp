#include <bits/stdc++.h>
#include <fstream>
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

ll modpow( ll x, ll n) {
    if (n == 0) 
        return 1;
    ll u = modpow(x, n >> 1);
    u = (u*u)%MOD;
    if (n & 1) 
        u = (u*x)%MOD;
    return u;
}

int CSN(ll  r, ll n ){ 
   
    if (n == 0)
        return 1;
    if (n == 1)
        return (1 + r) % MOD;
      
    ll ans ;
    if (n % 2 == 1){ 
        ll k1 = modpow(r,2) ;
        ans = (1 + r) * CSN( k1,(n - 1) / 2);
    }
    else{
          
        ll k1 = modpow(r,2) ;
        ans = 1 + ( (r * (1 + r) % MOD ) * CSN( k1 , (n / 2) - 1));
    }
    return (ans % MOD);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a,r, n ;
    cin >> a >> r >> n ;
    n--;
    ll ans = CSN(r,n)*a;
    cout << ans % MOD<<nl;
    
    
    return 0;
}
