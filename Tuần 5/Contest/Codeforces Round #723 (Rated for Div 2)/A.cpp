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
 
    int tt;
    cin >>tt ;
    while(tt--){
        int n ;
        cin >> n ;
        vector<int> a(2*n);
        for(auto&it:a)
            cin >> it ;
        sort(all(a)); 
        int sz = 2*n-1 ;
        for ( int i = 0 ; i < n ; i++) {
            cout << a[i] <<" "<<a[sz] <<" ";
            sz--;
        }
        cout<<nl;
            
    }
    return 0;
}
