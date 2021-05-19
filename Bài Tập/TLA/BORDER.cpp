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

int n ,  m , ans = 0 ;
char a[1005][1005] ;
const int xd[4] = {0,1,0,-1}, yd[4] = {1,0,-1,0};

bool check(int x , int y) {
    if (x < 0 || x >= m || y < 0 || y >= n )
        return false ;
    return true;
}

void flood(  int i , int j) {
    for (int k = 0 ; k < 4 ; k++) 
        if ( check(i+xd[k] , j + yd[k]) == true && a[i+xd[k]][j + yd[k]] == 'B' )
            ans++;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    cin >> n >> m ;
    for (int i = 0 ; i < m ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> a[i][j] ;
    
    for (int i = 0 ; i < m ; i++)
        for (int j = 0 ; j < n ; j++)
            if ( a[i][j] == 'A')
                flood(i,j);
    cout << ans ;
   
    return 0;
}
