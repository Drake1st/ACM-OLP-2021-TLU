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
const double pi = 3.1415926535 ;
int a[26] ={0};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s ;
    int n ;
    cin >> n ;
    
    cin.ignore() ;
    while(n--){
        getline(cin,s) ;
        //cout << s <<nl;
       
        for (int i = 0 ; i < s.length() ; i++) 
            if ( s[i] >='a' && s[i] <= 'z')
                a[s[i]-'a']++;
            else if ( s[i] >='A' && s[i] <='Z')
                a[s[i]-'A']++;
    }
    
    vector<pair<int,int>> c ;
    
    for (int i = 0 ; i < 26 ; i++) {
        if ( a[i]!=0)
            c.pb({a[i],i});
    }
    sort(all(c)) ;
    reverse(all(c));
    
    for (int i = 0 ; i < c.size() ; i++)
        for (int j  =0 ; j < c.size() ; j++) {
            if ( i != j &&c[i].fi == c[j].fi && c[i].se < c[j].se)
                swap(c[i],c[j]);
        }
    for (int i = 0 ; i < c.size() ; i++){
        char c1 = c[i].se+'a';
        //toupper(c1);
        cout <<(char) (c1-32) <<" "<<c[i].fi<<nl;
    }
    
    return 0;
}
