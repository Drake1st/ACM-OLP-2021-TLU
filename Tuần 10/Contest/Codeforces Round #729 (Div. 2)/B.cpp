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
        ll n , a , b ;
        cin >> n >> a >> b ;
        int ok  = 0;
        if(a==1){
        if((n-1)%b==0)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
        
        continue;
        }
        ll z = 1  ;
        vector<ll> power ;
        while( z <= n) {
            power.pb(z) ;
            z*=a;
        }
        for (int i = 0 ; i < power.size() ; i++){
            if ( (n - power[i] ) % b == 0) {
                ok = 1 ;
                break;
            }
           


        }
        if(ok)
            cout <<"YES"<<nl;
        else
            cout <<"NO"<<nl;
    }
   
    return 0;
}
