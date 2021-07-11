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
        ll xa, ya, xb, yb, xc,yc ;
        cin >> xa >> ya >> xb >> yb >> xc >> yc ;
        ll ans = abs(xa-xb) + abs(ya-yb) ;
        if (  (xa == xb && xb == xc  && ( (ya > yc  && yc > yb ) || (yb > yc  && yc > ya )) ) ||  
        (ya == yb && yb == yc && ( ( xa > xc && xc > xb  )  || (xb  > xc && xc > xa) ) ) ) 
            ans+=2 ;
        cout << ans  <<nl;
        
    }
    
    return 0;
}
