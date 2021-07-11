#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ;
    cin >> tt ;
    while(tt--){
        int k , n , m  ;
        cin >> k >> n >> m ;
        vector<ll> a(n) ;
        vector<ll> b(m) ;
        vector<ll> ans ;
        ll cnt = 0 , ok = 0  ;
        for(auto&it:a) cin >> it ;
        for(auto&it:b) cin >> it ;
        ll i = 0 , j = 0 ;
        
        while( true) {
            if ( i == n && j == m){
                for(auto&it:ans)
                    cout << it <<" ";
                cout<<nl;
                break;
            }
            else if ( i == n ) {
                if ( b[j]  == 0){
                    cnt++;
                    ans.pb(0);
                    j++;
                }
                else if ( cnt + k >= b[j] ) {
                    ans.pb(b[j]);
                    j++;
                }
                else{
                    ok =1 ;
                    cout << -1 <<nl;
                    break;
                }
                    
                    
            }
            else if ( j == m ){
                if ( a[i] == 0) {
                    cnt++;
                    ans.pb(0);
                    i++;
                }else if ( cnt+k >= a[i] ){
                    ans.pb(a[i]);
                    i++;
                }
                else{
                    ok =1 ;
                    cout << -1 <<nl;
                    break;
                }
                
            }
            else {
                if ( a[i] == 0){
                    i++;
                    cnt++;
                    ans.pb(0);
                }
                else if ( b[j] == 0){
                    j++;
                    ans.pb(0);
                    cnt++;
                }
                else if ( cnt+k < min(a[i], b[j])) {
                    ok = 1 ;
                    cout << -1 <<nl;
                    break;
                }
                else {
                    if ( a[i] > b[j]) {
                        ans.pb(b[j]) ;
                        j++;
                    }
                    else if ( a[i] < b[j]) {
                        ans.pb(a[i]);
                        i++;
                    }
                    else {
                        ll _i = i +1, _j = j  +1;
                        while(true) {
                            if ( a[_i] * b[_j] != 0 ) {
                                _i++;
                                _j++;
                            }
                            else if ( a[_i] == 0){
                                ans.pb(a[i]) ;
                                i++;
                                break;
                            }
                            else{
                                ans.pb( b[j]) ;
                                j++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        
        
        
    }
    
    return 0;
}
