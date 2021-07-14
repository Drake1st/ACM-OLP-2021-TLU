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
        cin >>n;
        vector<int> arr(n);
        map<ii,int> count_;
        for (int i=0;i<n;i++){
            cin>>arr[i];
            count_[mp(arr[i],i%2)]++;
        }
        sort(all(arr));
        bool f=1;
        map<ii,int> count_ans;
        for(int i=0;i<n;i++){
            count_ans[mp(arr[i],i%2)]++;
        }
        for(auto &item:count_ans){
            ii tmp = item.fi;
            if(count_[tmp]!=item.se){
                f=0;
                cout<<"No\n";
                break;
            }
        }
        if(f) cout<<"Yes\n";
        
       
    }
    
    return 0;
}
