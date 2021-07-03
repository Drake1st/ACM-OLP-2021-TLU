
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
        int n ;
        cin >> n ;
        vector<ll> a(n) ;
        vector<int> b; 
        for (auto&it:a)
            cin >> it ;
            
        int x = 0 , y  = 0 ;
        ll mn = MOD ;
        sort(all(a));
        ll z = 0 , z1 = 0;
        for (int i = 0 ; i < n-1 ; i++)
            if ( abs(a[i] - a[i+1]) < mn) {
                mn =min (abs(a[i]-a[i+1] ),mn) ;
                x = i ;
                z=a[i];
                z1 = a[i+1];
                y = i+1;
            }
        swap(a[0],a[x]) ;
        swap(a[n-1],a[y]) ;
        // 
        sort(a.begin()+1, a.begin()+n-1);
        cout << a[0]<<" ";
        for (int i = 1 ; i < n-1 ; i++)
            if ( a[i] >= z)
                cout << a[i]<<" ";  
        for (int i = 1 ; i < n-1 ; i++)
            if ( a[i] < z1)
                cout << a[i]<<" ";   
        cout << a[n-1]<<nl;
    }
    
    return 0;
}
