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
        cin >>n ;
        vector<int> a(n) ;
        vector<int> b(n) ;
        ll sum1 = 0  , sum2 = 0 ;
        for(auto&it:a)  {
            cin >> it ;
            sum1+=it ;
        }
        for (auto&it:b) {
            cin >> it ;
            sum2+=it ;
        }
        if ( sum1 != sum2 )
            cout << -1 <<nl;
        else{
            int cnt = 0 ;
           
            for (int i = 0 ; i < n ;i++)
                if ( a[i] > b[i]) {
                    cnt+= ( (a[i]-b[i]));
                }
            cout << cnt <<nl;
            for (int i = 0 ; i < n ; i++){
                while ( a[i] > b[i]) {
                    for (int j =0 ; j < n ; j++) {
                        if ( a[i] == b[i])
                            break;
                        if ( a[j] < b[j]) {
                            a[j]++;
                            a[i]--;
                            cout << i+1 <<" "<<j+1<<nl;
                        }
                        
                    }
                }
            }
        }
        
       
    }
    
    return 0;
}
