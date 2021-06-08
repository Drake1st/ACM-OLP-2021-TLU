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
        
        int n ;
        cin>>n ;
        vector<int> a(n);
        for(auto&it:a) cin >> it ;
        cout << 3*n<<nl;
        for (int i = 1 ; i <= n ; i+=2) {
            
            for (int k = 0 ; k < 2 ; k++) {
                cout << "1 "<<i<<" "<<i+1<<nl;
                cout << "2 "<<i<<" "<<i+1<<nl;
                cout << "1 "<<i<<" "<<i+1<<nl;
            }
            
        }
    }
    return 0;
}
