#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef unsigned long long int ull ;
 
const int MOD=1e9+7;
const char nl = '\n';
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s ;
    cin >> s ;
    int a[26] = {0} ;
   
    for (int i = 0 ; i < s.length() ; i++)
        a[s[i] - 65]++;
    int check = 0 ;
    for (int i = 0 ; i < 26 ; i++)
        check += (a[i] & 1) ;
    
    if ( check > 1 ){
        cout <<"NO SOLUTION";
        return 0 ;
    }
    string ans ;
    for (int i = 0 ; i < 26 ; i++)
        if ( a[i]&1^1)
            for (int j = 0 ; j < a[i]/2 ; j++)
                ans+= ((char)i+65) ;
    cout << ans ;
    for (int i = 0 ; i < 26 ; i++)
        if ( a[i]&1)
            for (int j = 0 ; j < a[i] ; j++)
                ans+= ((char)i+65) ;
    reverse(all(ans)) ;
    cout << ans ;
    return 0;
}