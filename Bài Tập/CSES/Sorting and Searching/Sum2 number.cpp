#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    
 
    ll  n,k;
    
    cin>>n>>k;
    vector<pair<ll, ll>> a(n) ;
    for (int i = 0; i < n; i++)
	{
		cin >> a[i].first;
		a[i].second = i + 1;
	}
    sort(a.begin(),a.end());
    ll i = 0 ;
    ll j = n-1;
    while(i<j){
        if(a[i].first+a[j].first == k)
        {
            
            cout<<a[i].second<<" "<<a[j].second;
            return 0;
        }
        if (a[i].first + a[j].first < k)
		{
			i++;
		}
		else
		{
			j--;
		}
        
    }
    
        cout<<"IMPOSSIBLE";
    return 0;
}