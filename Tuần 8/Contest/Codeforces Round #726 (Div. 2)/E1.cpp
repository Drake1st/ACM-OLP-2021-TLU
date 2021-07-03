
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
    int n,k; cin>>n>>k;
    string s,kk; cin>>s;
    // cout<<s<<endl;
    kk = string(k,'z');
    string tmp;
    for(int i=0;i<n;i++){
        string x;
        tmp.append(1,s[i]);
        x.append(tmp.begin(),tmp.end());
        while(x.size()<k){
            x.append(x.begin(),x.end());
        }
        if(x.size()>k){
            x=string(x.begin(),x.begin()+k);
        }
        if(x<kk){
            kk=x;
        }
        
    }
    // cout<<tmp<<endl;
    cout<<kk<<endl;
    return 0;
}
