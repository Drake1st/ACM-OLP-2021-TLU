#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) (v).begin(), (v).end()
 
typedef long long ll;
typedef unsigned long long int ull ;
 
using namespace std;
 
const int M=1e9+7;
const char nl = '\n';
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s ;
    cin >> s ;
    sort(all(s)) ;
    
    vector<string> ans  ;
    do {
        ans.pb(s);
    } while(next_permutation(all(s)) ) ;
    
    cout << ans.size() <<nl;
    for (int i = 0 ; i < ans.size() ; i++)
        cout << ans[i] <<nl;
    return 0;
}