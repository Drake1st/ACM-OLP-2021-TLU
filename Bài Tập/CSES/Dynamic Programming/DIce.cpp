#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin >> n ;
    int dp[1000001] ;
    dp[0] = 1 ;
    ll x ;
    for (int i = 1 ; i <= n+1 ; i++)  {
        x = 0;
        for (int j = 1; j <= 6 && j <= i; j++)
            x += dp[i - j];
        dp[i] = x % MOD;
        
    }
      
    cout << dp[n] ;
    return 0;
}