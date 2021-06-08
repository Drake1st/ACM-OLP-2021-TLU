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
        map<char,bool> c;
        string s; cin>>s;
        for(int i=0;i<n;i++){   c[s[i]]=1;}

        if(c.size()<26){
            for(int i=0;i<26;i++){
                char x =char('a'+i); 
                if(!c[x]){ cout<<x<<endl; break;}
            }
            continue;
        }
        vector <string> arr;
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                string a(1,'a'+i),b(1,'a'+j);
                a.append(b);
                arr.pb(a);
            }
        }
        bool f=0;
        for(string &item:arr){
            size_t found = s.find(item);
            if(found==string::npos){
                cout<<item<<endl;
                f=1;
                break;
            }
        }
        if(f) continue;
        for(string &item:arr){
            for(int i=0;i<26;i++){
                string c(1,'a'+i);
                string k=item;
                k.append(c);
                size_t found = s.find(k);
                if(found==string::npos){
                    cout<<k<<endl;
                    f=1;
                    break;
                }
            }
            if(f) break;
        }
    }
    
    return 0;
}
