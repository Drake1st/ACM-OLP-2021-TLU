#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int tt ;
    cin >> tt ;
    while(tt--){
        int n,m;
        cin >>n>>m;
        n = 2*n-1;
        vector<string> a(n) ;
        for (auto&it:a) cin >> it ;
        map<pair<int,char> , int> ck;
        for (int i = 0 ; i < n ; i++)
            for (int j = 0 ; j < m ; j++)
                ck[{j,a[i][j]}]++;
        
        for (int i = 0 ; i < n ; i++){
            int ok = 0;
            for (int j = 0 ; j < m ; j++)
                if ( ck[{j,a[i][j]}] % 2 == 0)
                    ok = 1 ;
            if(!ok){
                cout << a[i] <<nl;
                break;
            }
        }
       
    }
    
    return 0;
}
