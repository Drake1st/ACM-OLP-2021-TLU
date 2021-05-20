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

ull power(unsigned long long x, int y, int p){
    ull res = 1; 
 
    x = x % p; 
 
    while (y > 0){
     
     
        if (y & 1)
            res = (res * x) % p;
 
        
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

ull modInverse(unsigned long long n, int p){
    return power(n, p - 2, p);
}
 

ull nCrModPFermat(unsigned long long n,int r, int p){
  
    if (n < r)
        return 0;
   
    if (r == 0)
        return 1;
 
   
    ull fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n , k;
    cin >> n >> k ;
    n--;
    k--;
    ll ans = 0;
    for (ll i = 0 ; i <= n ; i++)
        if( (i+1) % (k+1) == 0) {
            ans+=nCrModPFermat(n,i,7340033);
            //cout << ans <<nl;
            ans %=7340033;
        }
    cout << ans;

    return 0;
}
