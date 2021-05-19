#include <bits/stdc++.h>
using namespace std;
 
int main(){
    unsigned long long int dem,n,dem1;
     
    cin>>n;
    
    
    for(long long i = 1; i<= n ;i++){
        dem = i * i * (i * i - 1) / 2;
        dem1 = 4*(i-1)*(i-2);
        
        cout << dem-dem1<<endl;
    }
    
    
    return 0;       
    