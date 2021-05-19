#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    unsigned long long int A = 1;
    cin>>n;
     
    
    for (int i = 0; i < n; i++) {
        A *= 2;
        A %= (1000000000+7);
    }
 
    cout << A;
    
}