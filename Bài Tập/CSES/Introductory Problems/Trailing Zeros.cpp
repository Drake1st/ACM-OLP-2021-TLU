#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{   
    unsigned long long int dem,i;
    int n;
    cin >> n;
    
   for(int i = 5; n/i>=1;i*=5)
        dem += n/i;
        
        
    cout<<dem;
    
    
    
    return 0 ;
}