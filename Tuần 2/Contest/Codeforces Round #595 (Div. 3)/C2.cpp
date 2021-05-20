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

vector<string> a ;
int cnt =0 ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int tt ;
    cin >> tt ;
    while(tt--){
        ll x ;
        cin >> x ;
        ll tmp =  x ;
        vector<int> c ; 
        while(tmp != 0) {
            int tm = tmp % 3 ;
            c.pb(tm);
            tmp/=3;
        }
        c.pb(0);
        ll ans =0 ;
        ll cnt = 1 ;
        for (int i = 0 ; i < c.size() ; i++) {
            if(c[i] >= 2) {
                ans=0;
                c[i+1]++;
            }
            else
                ans+=cnt*c[i];
            cnt*=3;
        }
        cout << ans<<nl;
    }
    
    return 0;
}
