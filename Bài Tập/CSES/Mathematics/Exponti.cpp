#include<iostream>
using namespace std;
 
long long modpow(int x, int n) {
	if (n == 0) 
		return 1;
	long long u = modpow(x, n >> 1);
	u = (u*u)%(1000000000+7);
	if (n & 1) 
		u = (u*x)%(1000000000+7);
	return u;
}
 
 
int main(){
    int n,a,b;
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        cin>>a>>b;
        cout<<modpow(a,b)<<endl;
    }
    return 0 ;
}