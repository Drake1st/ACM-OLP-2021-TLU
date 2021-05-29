#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main(){	
	int n;
    cin>>n;
    vi arr(n);
    for(auto &item:arr) cin>>item;
    multiset <int> neg;
  
    int ans =n ;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]<0)
            neg.insert(arr[i]);
        while (sum < 0) {
            int num=*neg.begin();
            sum+=-num;
            neg.erase(neg.begin());
            ans--;
        }
        
    }

    cout<<ans<<endl;
	return 0;
}
