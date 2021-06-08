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
        int n ;
        cin >>n ;
        vector<int> a(n) ;
        vector<int> b ;
        for (auto&it:a) {
            cin >> it ;
            if ( it % 2 == 0)
                b.pb(it);
        
        }
        for (auto&it:a) {
            if ( it % 2 == 1)
                b.pb(it);
        
        }
        int ans = 0 ;
        for (int i = 0 ; i < n ; i++)
            for (int j = i+1 ; j < n ; j++)
                if ( __gcd(b[i] , 2*b[j]) > 1 )
                    ans++;
        cout<<ans<<endl;
    }
    return 0;
}
