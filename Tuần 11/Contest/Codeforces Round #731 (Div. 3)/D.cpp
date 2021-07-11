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

string decToBinary(ll n){
   
    string s ;
    
    while (n > 0) {
        s+=  ( ( n % 2 )+'0');
        n = n / 2;
    }
 
    reverse(all(s)) ;
    
    return s ;
}

ll BiToDec ( string s ) {
    
    reverse(all(s)) ;
    ll n = 0 ;
    for (int i = 0 ; i < s.length() ; i++)
        n+=  (( s[i] -'0') * pow(2,i) ) ;
    
    return n ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ;
    cin >> tt ;
    while(tt--){
        int n  ;
        cin >> n ; 
        vector<ll> a(n) ;
        for (auto&it:a)
            cin >> it ;
        vector<ll> ans ;
        
        
        ll pre = 0 ;
        for ( int i = 0 ; i < n ; i++) {
            ll x = pre & (~a[i]);
            ans.pb(x);
            pre = x ^ a[i] ;
        }
        for(auto&it:ans)
                cout << it <<" ";
        cout<<nl;
        
        
        
        
        // 1011
        // 0100
    }
    
    return 0;
}
