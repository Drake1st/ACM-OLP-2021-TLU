#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
 
int main(){
    ull n,a,b;
     
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if((a + b) % 3 ==0 && 2*a >= b  && 2*b >= a )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
            
    }
    
    
    
    return 0;       
            
}