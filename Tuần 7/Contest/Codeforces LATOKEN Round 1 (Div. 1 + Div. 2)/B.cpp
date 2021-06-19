#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,tmp,ans=0;
		cin>>n;
		vector<long long> his;
		his.push_back(0);
		for(int i=0;i<n;i++){
			cin>>tmp;
			his.push_back(tmp);
		}
		his.push_back(0);
		
		for(int i=1;i<=n;i++){
			if(his[i]>his[i-1] && his[i]>his[i+1])
				if(his[i-1]>his[i+1]){
					ans+=(his[i]-his[i-1]);
					his[i]=his[i-1];
				}
				else{
					ans+=(his[i]-his[i+1]);
					his[i]=his[i+1];
				}
		}
	
		for(int i=1;i<=n+1;i++){
			ans+=abs(his[i]-his[i-1]);
		}
		cout<<ans<<endl;
	} 
}
