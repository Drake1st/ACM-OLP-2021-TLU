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
 
struct point{
    ll x,y;
    void read() {
        cin >>x  >> y ;
    }
    point operator -  (const point& b){
        return point{x-b.x , y - b.y};
    }
    void operator-=( const point&b) {
         x-= b.x ;
         y-=b.y ;
    }
 
    ll operator * ( const point&b) const{
        return (ll) x * b.y -(ll) y *b.x;
    }
};
 
point  origin;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin>>n ;
    vector<point> a(n) ;
    for (auto&it:a)
        it.read() ;
    ll ans = 0 ;
    for (int i = 0; i < (int)a.size(); i++) {
        ans+= a[i]*a[i+1== n ? 0 : i+1];
    }
    cout <<abs(  ans) ;
    return 0;
}
