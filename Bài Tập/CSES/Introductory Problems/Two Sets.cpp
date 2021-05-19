#include <bits/stdc++.h>
#define pb push_back
#define ll long long 
using namespace std;
 
int main()
{
    ll n , check ;
    vector<ll> A ;
    vector<ll> B ;
    cin >> n ; 
    check = n*(n+1)/2;
    if( check % 2 != 0 )
        cout << "NO" ;
           
    else{
    ll sumA = 0 , sumB = 0 ;
   
    for (int i = n ; i >=1 ; i--){
         if(sumA >= sumB){
            sumB+=i;
            B.pb(i) ;
            
        }
        else{
            sumA+=i;
            A.pb(i) ;  
        }
    }
    
    cout << "YES" << endl ;
    cout << B.size() <<endl;
    for (int i = 0 ; i < B.size() ; i++)
        cout << B[i] <<" " ;
        
        
    cout << endl;
    
    cout << A.size() <<endl;
    for (int i = 0 ; i < A.size() ; i++)
        cout << A[i] <<" " ;
    
    }
    
    return 0;
}