#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
 
 
int main()
{
    
 
    ll  n,k;
    
    cin>>n>>k;
    vector<ll> ans;
    vector<pair<ll, ll>> a(n) ;
    for (int i = 0; i < n; i++)
	{
		cin >> a[i].first;
		a[i].second = i + 1;
	}
    sort(a.begin(),a.end());
    
    for ( int o = 0 ; o < n ; o++){
        
    ll i = 0 ;
    ll j = n-1;
    while(i < j ){
       
         if(a[i].first+a[j].first == k - a[o].first && o != i && o != j)
        {
            
            cout<<a[i].second<<" "<<a[j].second << " "<<a[o].second;
            return 0;
        }
        if (a[i].first + a[j].first < k- a[o].first && o != i && o != j)
		    i++;
		else
	        j--;
		
        
    }
    }
   
        cout<<"IMPOSSIBLE";
 
    return 0;