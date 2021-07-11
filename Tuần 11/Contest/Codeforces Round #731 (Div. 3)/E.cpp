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
        int n ,k ;
        cin >> n >>k; 
        vector <pair<int,ll>> air_condi(k);
        map<int,bool> check_;
        for(auto &item:air_condi)     {cin>>item.fi; item.fi--; check_[item.fi]=1;}
        for(auto &item:air_condi)     cin>>item.se;
        sort(all(air_condi));
        // for(auto &item:air_condi) cout<<item.fi<<" "<<item.se<<endl;
        vector <ll> ans(n,1e17);
        int tmp =0;
        for(int i=air_condi[0].fi;i<n;i++){
            if(i==0)    {ans[i]=air_condi[tmp].se;tmp++;}
            else if(check_[i]){
                ans[i]=min(ans[i-1]+1,air_condi[tmp].se);
                tmp++;
            }
            else{
                ans[i] = min(ans[i],ans[i-1]+1);
            }
        }
                
        // for(auto &item:ans) cout<<item<<" ";
        // cout<<endl;
        tmp = k-1;
        for(int i=air_condi[k-1].fi;i>=0;i--){
            if(i==n-1){    ans[i]=min(air_condi[tmp].se,ans[i]); tmp--;}
            else if(check_[i]){
                ll k =min(ans[i+1]+1,air_condi[tmp].se);
                ans[i] = min(ans[i],k);
                tmp--;
            }
            else{
                ans[i] = min(ans[i],ans[i+1]+1);
            }
        }        
        for(auto &item:ans) cout<<item<<" ";
        cout<<endl;
    }
    
    return 0;
}
