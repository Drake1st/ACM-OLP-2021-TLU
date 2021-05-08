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
        int n ;
        string s ;
        cin >> n >> s ;
        int ok = 0 ;
        for (int i = 0 ; i < n - 1; i++) {
            
            for (int j = i + 1 ; j < n ; j++)
                if ( s[j] == s[i]) {
                    for (int k = i ; k <= j ; k++)
                        if ( s[k] != s[i]) {
                            ok = 1 ;
                            break;
                        }
                }
            if(ok)
                break;
        }
        if(ok)
            cout <<"NO"<<nl;
        else
            cout<<"YES"<<nl;
        
    }
    return 0;
}
