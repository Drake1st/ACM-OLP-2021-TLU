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
const double EPS =1e-9;
const double pi = 3.141592653589793 ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ;
    cin >> tt ;
    while(tt--){
        ll a , b ;
        cin >> a >> b ;
       
        if ( a > b )
            swap(a,b) ;
        if ( a== b )
            cout << 0 <<" "<<0<<nl;
        else{
            ll  _b = b-a ;
            ll tmp = a ;
            if ( _b == __gcd(a,b))
                tmp = 0 ;
            else
                tmp = min({tmp , _b - (b%_b), b%_b});
            cout <<_b <<" "<< tmp <<nl;
        }
        
    }
    return 0;
}
