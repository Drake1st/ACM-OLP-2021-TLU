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
        int n ;
        cin >>n ;
        vector<ll> a(n) ;
        ll sum = 0 ;
        for(auto&it:a) {
            cin >> it ;
            sum+=it ;
        }
       
        ll  tmp = sum/n , pre = 0 ; 
        for ( auto&it:a)
            if ( it > tmp) {
                pre+=(it-tmp);
                it = tmp;
            }
        for (auto&it:a)
            if ( it < tmp) {
                if ( pre >= tmp - it) {
                    pre -= ( tmp-it);
                    it= tmp;
                }
            }
        // cout << pre <<" ";
        
        for (int i = 0 ; i < n ; i++) {
            if ( pre> 0) {
                pre--;
                a[i]++;
            }
        }
        sort(all(a));
        
        // for (auto &it:a)
        //     cout << it <<" ";
        // cout<<nl;
        
        vector<ll> b(n) ;
        b[0] = a[0] ;
        for (int i = 1 ; i < n ; i++) {
            b[i]= b[i-1] + a[i] ;
            // cout << b[i] <<" ";    
        }
        ll ans =  b[n-1] - n*a[0];
        
        for (int i = 1 ; i < n-1 ; i++) 
            // cout << b[n-1] -b[i-1] - (n-i-1)*a[i] <<nl;
            ans+= (b[n-1] -b[i-1] - (n-i)*a[i]) ;
        cout<<ans <<nl;
        
    }
    return 0;
}
