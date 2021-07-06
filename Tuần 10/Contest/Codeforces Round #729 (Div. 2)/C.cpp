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
	ll arr[]={0, 0, 2, 3, 2, 5, 0, 7, 2, 3, 0, 11, 0, 13, 0, 0, 2, 17, 0, 19, 0, 0, 0, 23, 0, 5, 0, 3, 0, 29, 0, 31, 2, 0, 0, 0, 0, 37, 0, 0, 0, 41};
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ;
    cin >> tt ;
    while(tt--){
        ll n; cin>>n;
        ll ans = 0,tmp=1,run=n;
        for(int i=1;i<=41;i++){
        	if(arr[i]==0) continue;
        	tmp*=arr[i];
        	run = run-(n/tmp);
        	ans+=(i*run%MOD);
        	ans%=MOD;
        	run = n/tmp;
        	if (run == 0) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
