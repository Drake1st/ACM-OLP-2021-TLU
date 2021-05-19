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
    ll  v ,ans1=0,ans2=0;
    string s ;
    cin >> v >> s ;
    
    int a[] = {6,2,5,5,4,5,6,3,7,6} ; // luu tru so nhung canh cua tung chu so
    int b[] = {1,6,1,2,2,3,1,4,0,1} ; // luu tru so truong hop co the thay doi cua tung chu so
    for (int i = 0 ; i < s.length();i++) {
        
        int tmp = s[i] - '0' ;
        ans1+=a[tmp];
        if ( tmp != 8 ) {
            int tn = 0 ;
            if (tmp == 1|| tmp == 9)
                tn=1;
            if ( tmp == 7)
                tn=2;
           ans2 +=ans2*b[tmp]+b[tmp]-tn;
           
        }
    }
    
    if ( v == 1 ) cout << ans1 ;
    else cout << ans2;
    
 
    return 0;
}
