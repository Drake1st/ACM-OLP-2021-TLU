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
int n ;
ll a[100] , ans, total = 0 ;
void ok(int i , ll sum){
    if (i == n ){
        ll k = abs(total - 2*sum);
        ans = min (ans,k);
        return ;
    }    
    ok(i+1, sum);
    ok(i+1, sum+a[i]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n ;
    
    for (int i = 0 ; i < n ;i++){
        cin >> a[i];
        total += a[i];
    }
    ans = total;
    ok(0,0);
    cout << ans;
    return 0;
}