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
        map<int,int> ans;
        int st = 0 ;
        for (int i = 0 ; i < n ; i++)
            if (ck[i] == 0){
            int pre = i;
            int cnt = 1;
            while(true){
                ck[pre]=1;  
                c[pre]=st;
                pre = a[pre];
                cnt++;
                if ( pre == i){
                    
                    ans[st]=cnt-1;
                    st++;
                    break;
                }
            }
        }
        for (int i =0 ; i < n; i++)
            cout << ans[c[i]]<<" ";
        cout<<nl;
        
        
    }
    return 0;
}
