#include <bits/stdc++.h>
using namespace std;
bool check(int x){
	// cout<<x/111<<" "<<x%11<<endl;
	if(x/111 >= x%11) return true;
	return false;
}
int main()
{	
	int t;
	cin>>t;
	while (t--){
		int x;
		cin>>x;
		if(x>1110) cout<<"YES"<<endl;
		else{
			// cout<<check(x)<<endl;
			if (check(x)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
 
	}
	return 0;
}
