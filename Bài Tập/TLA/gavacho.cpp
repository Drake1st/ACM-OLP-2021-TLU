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
    ll n , m ;
    cin >> n >>m ;
    ll y = m/2 - n ;
    ll x = n-y ;
    if ( x+ y == n && 2*x+4*y == m && x >= 0 && y >=0 ) {
        cout << x <<" "<<y ;
    }
    else
        cout <<-1 ;
    
    return 0;
}
