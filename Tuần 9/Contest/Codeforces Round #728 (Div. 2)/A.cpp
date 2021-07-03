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
        int n  ;
        cin >> n ;
        vector<int> a ;
        for (int i = 1 ; i <= n ; i++)
            a.pb(i) ;
        for (int i = 0 ; i < n-1 ; i+=2)
            swap(a[i],a[i+1]) ;
        if ( a.back() == n)
            swap(a[n-1] , a[n-2]);
        for(auto&it:a)
            cout << it <<" ";
        cout<<nl;
    }
    
    return 0;
}
