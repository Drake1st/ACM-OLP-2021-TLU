#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{   
    int dem = 1,max = 0;
    string dna;
    cin>>dna;
    if(dna.length()==1) cout<<1;
    else{
    for(int i=0;i<dna.length()-1;i++)
        {
        if(dna[i] == dna[i+1]){
            dem++;
        }
        else{
            
            dem = 1;
        }
        if(dem>= max){
         max = dem;
        }
        
    }
    cout<<max;
    }
 
    return 0;
}