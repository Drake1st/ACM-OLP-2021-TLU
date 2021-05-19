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
    int n , t ;
    cin >> n >>t;
    vector<int> a(n+5,0) ;
    
    while(t--){
        int x ,y ;
        cin >> x >> y ;
        a[x]++;
        a[y+1]--;
    }
    int ans = 0 ;
    int tmp = 0;
    for (int i = 1 ; i <= n ; i++ ) {
        tmp+=a[i] ;
        if ( tmp % 3 == 0)
            ans++;
    }
    cout << ans;


    
    
    
    return 0;
}
