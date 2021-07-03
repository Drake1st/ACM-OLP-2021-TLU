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
    int n,q; cin>>n>>q;
    vector <char> ch(n);
    vector < new_t> arr; 
    int i=0;
    new_t tmp;
    for(auto &item:ch){
        cin>>item;
        tmp[item]++;
        arr.pb(tmp);
    }
    // cout<<ch.size()
    // cout<<1<<endl;
    
    while(q--){
        ull ans=0;
        int l,r; cin>>l>>r;
        l--,r--;
        for(const auto& [key, value]:arr[r]){
            int ratio = key-'a'+1;
            int p = abs(value-arr[l][key]);
            if(key==ch[l]) p++;
            // cout<<p<<endl;
            ans+=(p*ratio);
        }
        cout<<ans<<endl;
    }
    return 0;
}
