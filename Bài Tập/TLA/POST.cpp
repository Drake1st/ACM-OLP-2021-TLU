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
    ll ans = 0;
    int n, k ;
    cin >> n >> k ;
    vector<int> a(n) ;
    int temp[15] = {0};
    for (auto&it:a) cin >> it ;
    sort(all(a)) ;
    reverse(all(a));
    for(int i = 0; i < (1 << n); i++) {
        ll tmp = 0 , tmp1 = 0 ,tmp3  =0 ;
         vector<int> c ;
        for(int bit = 0; bit < n; bit++) {
           
            if( (i & (1 << bit)) && temp[bit] == 0 ) {
                tmp += a[bit];
                c.pb(bit) ;
                
            }
            
           
        }
        if ( tmp == 1000) {
                for (auto &it:c)
                    temp[it] = 1 ;
                ans+=k;
               // cout << ans <<" "<<tmp <<nl;
            }
        
    }
    for (int i = 0 ; i < n ; i++)
        if ( temp[i] == 0)
            ans+= a[i];
    cout << ans ;
      
    return 0;
}
