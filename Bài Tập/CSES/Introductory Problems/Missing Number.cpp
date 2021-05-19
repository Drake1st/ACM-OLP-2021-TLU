#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   unsigned long long int n,S;
   int a[2000000];
    cin>>n;
     for (int i = 1; i <= n-1; i++) {
        cin >> a[i];
    }
    
  S = n*(n+1)/2;
  for (int i = 1; i <= n-1; i++) {
        S-= a[i];
        
    }
    cout<<S;
  
 
    return 0;
}