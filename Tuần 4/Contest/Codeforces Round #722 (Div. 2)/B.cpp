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
    while(tt--){
        int n; cin>>n;
        vector<int> a(n) ;
        vector<int> ans; 
        for (auto&it:a) {
            cin >> it ;
            if ( it <= 0) 
               ans.pb(it) ;
        }
        if( ans.size() == 0) {
            cout << 1 <<nl;
            continue;
        }
        int ok =0;
        int cm = *max_element(all(a)) ;
        sort(all(ans)) ;
        int c = MOD;
        for (int i = 0 ; i < ans.size()-1; i++) {
            vector<int>::iterator lower_b ;
            lower_b = upper_bound(ans.begin(), ans.end() , ans[i]) ;
            if (ans[i] ==ans.back())
                c = min(0,c);
            else
                c  = min(c,abs(*lower_b - ans[i] )  );
        }
        //cout << c <<" ";
        for (int i = 0 ; i < a.size() ; i++)
            if ( a[i] <= c && a[i] > 0  )
                ok = 1 ;
        int ans1 = ans.size();
        if(ok)
            ans1++;
        cout << ans1 <<nl;
    }
    
    return 0;
}
