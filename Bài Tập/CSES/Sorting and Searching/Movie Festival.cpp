#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ll n,a,b;
    cin>>n;
    
    vector<pair<ll,ll>> X;
    for(int i  = 0 ; i < n ; i++){
        cin>>a>>b;
	    X.pb(make_pair(b,a));
            
    }
    sort(X.begin(),X.end());
    ll ans = 1;
    ll end = X[0].first;
    
    for(int i = 1; i < X.size(); i++)
        if(X[i].second >= end){
            end = X[i].first;
            ans++;
        }
    
    cout<<ans;
    
    
    
 
    return 0;
}