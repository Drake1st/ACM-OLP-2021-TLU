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
        int n;
        cin >>n ;
        if ( n==1){
            cout << 1 <<nl;
            continue;
        }
        
        for (int i = n ; i <=(int) 2e4; i++) {
            int ok=0;
            int k =i;
            while(  k != 0){
                if ( k % 3  == 2)
                    ok = 1;
                k/=3;
            }
            if ( !ok){
                cout <<i<<nl;
                break;
            }
        }
    }
    return 0;
}
