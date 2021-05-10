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
        ll x1,x2,x3,y1,y2,y3 ;
        cin >> x1>> y1 >> x2>> y2 >> x3>> y3 ;
        ll a = (y2-y1) ;
        ll b = (x2-x1) ;
        ll c = - x1*(y2-y1) + y1*(x2-x1) ;
        if ( x3*a-y3*b + c < 0)
            cout <<"LEFT"<<nl;
        else if (x3*a-y3*b + c > 0)
            cout <<"RIGHT"<<nl;
        else    
            cout <<"TOUCH"<<nl; 
    }
 
    return 0;
}
