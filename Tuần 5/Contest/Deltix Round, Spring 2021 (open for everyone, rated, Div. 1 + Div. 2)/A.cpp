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
const double pi = 3.1415926535 ;
int a[26] ={0};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ;
    cin >> tt ;
    while(tt--){
        int n , m ;
        cin >> n >>m ;
        string s ;
        cin >> s ;
        while(m--){
            vector<int> a ;
            if ( s[0] == '0' && s[1] =='1')
                a.pb(0) ;
            
            for (int i = 1 ; i < n-1; i++)
                if ( s[i-1] != s[i+1] && s[i] == '0')
                    a.pb(i) ;
            if ( s[n-1] =='0' && s[n-2] =='1')
                a.pb(n-1);
            if(a.size() == 0)
                break;
            else {
                for(auto&it:a)
                    s[it]='1';
            }
        }
        cout << s <<nl;
    }
    return 0;
}
