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
const int mod = 998244353 ;
const char nl = '\n';
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        vector <vector <char>> arr;
        int n,m;
        cin>>n>>m;
        bool f=1;
        int x1,y1;
        vector <pair<int,int>> ii;
        for(int i=0;i<n;i++){
            vector <char> tmp;
            for(int j=0;j<m;j++){
                char s; cin>>s;
                if(s=='.') {}
                else{ x1=i; y1=j; ii.pb(mp(x1,y1));}
                tmp.pb(s);
            }
            arr.pb(tmp);
        }
        if(ii.size()==0){
            char s='R';
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((abs(i-0)+abs(j-0))%2==0) cout<<"R";
                    else cout<<"W";
                }
                cout<<endl;
            }
            continue;
        }
        for(int i=0;i<ii.size()-1;i++){
            for(int j=i+1;j<ii.size();j++){
                char s1 = arr[ii[i].fi][ii[i].se], s2 = arr[ii[j].fi][ii[j].se];
                int x=abs(ii[i].fi-ii[j].fi),y=abs(ii[i].se-ii[j].se);
                // cout<<x<<" "<<y<<endl;
                if((x+y)%2==0 && s1!=s2) f=0;
                else if((x+y)%2 && s1==s2) f=0;
                if(!f) break;
            }
            if(!f) break;
        }
        int x = ii[0].fi, y = ii[0].se;
        char k;
        if((abs(x-0)+abs(y-0))%2==0){
            k=arr[x][y];
        }
        else{
            if(arr[x][y]=='R') k='W';
            else k='R';
        }
        if(f){
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((abs(i-0)+abs(j-0))%2==0) cout<<k;
                    else{
                        if(k=='R') cout<<"W";
                        else cout<<"R";
                    }
                }
                cout<<endl;
            }
            continue;
        }
        cout<<"NO\n";
    }
    
    return 0;
}
