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
    while(tt--) {
        int n ,x;
        cin >> n ;
        map<int,int> c ;
        int ck[n]={0};
        vector<int> a ;
        for (int i = 0 ; i < n; i++) {
            cin >> x ;
            x--;
            a.pb(x);
            c[x]=0;
            
        }
        
        for (int i = 0 ; i < n ; i++){
            int pre = i;
            while(true){
            c[pre]++;  
            pre = a[pre];
            if ( pre == i)
                break;
            }
        }
        for (int i =0 ; i < n; i++)
            cout << c[i]<<" ";
        cout<<nl;
        
        
    }
    return 0;
}
