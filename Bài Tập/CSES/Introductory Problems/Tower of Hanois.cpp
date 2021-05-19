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
void towerofhanoi(int n , int src , int dst , int tmp) {
    if ( n == 0)
        return ;
    towerofhanoi(n-1,src,tmp,dst);
    cout << src <<" "<<dst <<nl;
    towerofhanoi(n-1,tmp,dst,src);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin >> n;
    cout << pow(2,n)-1<<nl;
    towerofhanoi(n,1,3,2) ;
    return 0;
}