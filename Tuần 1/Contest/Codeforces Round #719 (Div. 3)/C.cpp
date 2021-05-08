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
    while(tt--) {
        int n ;
        cin >> n ;
        if ( n == 2) {
            cout << -1 <<nl;
            continue;
        }
        int c = 1 ;
        for (int i = 0 ; i < n ; i++) {
            for ( int j = 0 ; j < n ; j++) {
                if ( c  <= n*n ) {
                    cout <<c  <<" ";
                    c+=2;
                }
                else{
                    cout << 2 <<" ";
                    c = 4;
                }
            }
            cout <<nl;
        }
        
    }
   
    return 0;
}
