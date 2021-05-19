#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     constexpr int Lo=1e6+10;
    vector<int> a(Lo) ;
    for (int i = 1; i < Lo ; i++)
        for(int j=i; j<Lo; j+=i) 
            a[j]++;
    int tt ;
    cin >> tt ;
    while(tt--){
        int x ;
        cin >> x ;
        cout << a[x] <<nl;
    }
    
    return 0;
}