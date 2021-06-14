#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <int> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const long MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
bitset<10000010> bs ;
vi primes ;

// O(n loglog n)
void sieve ( int sz ) {
    bs.set() ;
    bs[0] = bs[1]=0;
    for ( ll i = 2 ; i <= sz ; i++)
        if ( bs[i]){
            for (ll j = i*i ; j <= sz ; j+=i)
                bs[j] = 0 ;
            primes.pb((int)i);        
        }
}

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0) 
            return false;
     return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(1000000);
    
    return 0;
}
