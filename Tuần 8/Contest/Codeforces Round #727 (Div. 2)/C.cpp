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
typedef map<char,int> new_t;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ull k,x;
    cin>>n>>k>>x;
    vector<ull> v(n,0);
    vector<ull> dis_;
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        ull tmp =v[i+1]-v[i];
        if(tmp>x)
            if(tmp%x==0)
                dis_.push_back(tmp/x-1);
            else
                dis_.push_back(tmp/x);

    } 
    sort(dis_.begin(),dis_.end());
    int l=dis_.end()-dis_.begin();
    // cout<<l;
    int i=0;
    while(i<l&&k>=dis_[i]){
        k-=dis_[i];
        i++;
    }
    cout<<l-i+1;
    return 0;
}
