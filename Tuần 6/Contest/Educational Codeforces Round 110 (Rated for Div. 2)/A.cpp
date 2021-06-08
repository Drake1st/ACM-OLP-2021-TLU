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
    int tt ;
    cin >> tt ;
    while(tt--){
        vector<int> a(4) ;
        vector<int> b ;
        int ok = 0 ;
        for (auto&it:a)  {
            cin >> it ;
            b.pb(it);
        }
        sort(all(b)) ;
        int x = max(a[0] , a[1]) ;
        int y = max(a[2] , a[3]) ;
        if (  (x == b[3] && y == b[2] )|| (x == b[2] && y == b[3] ) )
            cout <<"YES"<<nl;
        else
            cout <<"NO"<<nl;
        
    }
    return 0;
}
