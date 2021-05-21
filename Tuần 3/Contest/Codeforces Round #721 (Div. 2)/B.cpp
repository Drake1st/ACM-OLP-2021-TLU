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
        string s; cin>>s;
        map<char,int> zo;
        for(int i=0;i<n;i++) zo[s[i]]++;
        if(zo['0']%2){
            // zo['0']--;
            if(zo['0']==1) cout<<"BOB\n";
            else cout<<"ALICE\n";
            continue;
        }
        cout<<"BOB\n";
    }
    
    return 0;
}
