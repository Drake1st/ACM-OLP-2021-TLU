
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
        int n,m,i,j;cin>>n>>m>>i>>j;  
        if(n==1||m==1){
            // if()
            if(i==1&&j==1) 
                if(n==1) cout<<1<<" "<<(1+m)/2<<" "<<n<<" "<<m<<endl;
                else cout<<(1+n)/2<<" "<<1<<" "<<n<<" "<<m<<endl;
            else if(i==n&&j==m) 
                if(n==1) cout<<1<<" "<<(1+m)/2<<" "<<1<<" "<<1<<endl;
                else cout<<(1+n)/2<<" "<<1<<" "<<1<<" "<<1<<endl;
            else cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        }   

        else{
            if((i==1&&j==1)||(i==n&&j==m))
                cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
            else
                cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
            }
        }        
    
    return 0;
}
