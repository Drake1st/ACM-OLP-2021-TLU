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
        ll n ;
        cin >> n ;
        ll c = 0 ;
       
        while( (1<<(c+1)) <= n) 
           c++;
       
       //cout << c <<nl;
       cout <<(1<<c)-1 <<nl;
       
    }
    
    return 0;
}
