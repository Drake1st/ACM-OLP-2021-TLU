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
        map<int,int> count;
        int ans = 0;
        int num; cin>>num;
        count[num]++;
        for(int i=1;i<n;i++){
            int x; cin>>x;
            if(x<num){
                ans+=count[num];
                num=x;
                count[num]++;
            }
            else if(x>num){
                ans++;
            }
            else{
                count[num]++;
            }
        }
        cout<<ans<<endl;

    }
    
    return 0;
}
