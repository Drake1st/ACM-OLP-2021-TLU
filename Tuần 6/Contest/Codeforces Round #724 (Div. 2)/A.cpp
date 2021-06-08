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
        int n; cin>>n;
        map <int,bool> check_;
        vector<int> arr(n);
        int max_=0;
        bool f=0;
        for(auto &num:arr){ cin>>num; check_[num]=1; if(num<0) f=1; max_=max(num,max_);}
        if(f){
            cout<<"No\n";
            continue;
        }
        cout<<"Yes\n"<<max_+1<<endl;
        for(int i=0;i<=max_;i++) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}
