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

int n , m ;
int a[100] , ans = MOD ;
void ok(int i , ll sum ,int cnt ){
    //cout << sum <<nl;
    if (i == m ){
        ll k = pow(2,n)- 1 ;
        if( sum == k ) {
            ans = min(cnt,ans);
            //cout << sum <<" " << cnt<<nl;
        }
        return ;
    }    
    ok(i+1, sum, cnt);
    ok(i+1, sum xor a[i] , cnt+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >>m >>n ;
   
    for (int i = 0 ; i < m ; i++) {
        int num ;
        cin >> num ;
        int c = 0;
        while(num--){
            int x ;
            cin >> x;
            c+=pow(2,x-1);
        }
        a[i] =c ;
    }
    ok(0,0,0);
    if ( ans == MOD)
        cout <<-1;
    else
    cout << ans;
   
    return 0;
}
