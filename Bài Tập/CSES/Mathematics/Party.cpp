#include<bits/stdc++.h>
using namespace std;
 
unsigned long long int Party(int n){
    if(n<=2)
        return 1%(1000000000+7);
    else{
        if(n%2 == 0)
            return ((n%(1000000000+7)*Party(n-1)%(1000000000+7))%(1000000000+7)+1%(1000000000+7));
        else
            return ((n%(1000000000+7)*Party(n-1)%(1000000000+7))%(1000000000+7)-1%(1000000000+7));    
    }
}
 
int main()
{
    long long n;
    cin>>n;
    cout<<Party(n)%(1000000000+7)<<endl;
    
 
    return 0;
}