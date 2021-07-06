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

int a[100][100] = {0};
bool ck[100][100] ;
int P (int n , int m ) {
    if ( n == 1) return a[n][m] = 1 ;
    if ( a[n][m]) return a[n][m];
    int p1 = P(n-1,m),  p2 = 0 ;
    if ( n <= m) p2 = P(n,m-n);
    a[n][m] = (p1%MOD + p2%MOD) %MOD;
    return a[n][m];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ,m ;
    cin >>n >>m ;
    cout <<P(n,m);
   
    return 0;
}
