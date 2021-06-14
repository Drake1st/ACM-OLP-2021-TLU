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
int minPrime[(int)1e5+5];


void sieve ( int n ) {
    for (int i = 2; i * i <= n; ++i) 
        if (minPrime[i] == 0) 
            for (int j = i * i; j <= n; j += i) 
                if (minPrime[j] == 0) 
                    minPrime[j] = i;
            
        
    for (int i = 2; i <= n; ++i) 
        if (minPrime[i] == 0) 
            minPrime[i] = i;
}
vector<int> factorize(int n) {
    vector<int> res;
    while (n != 1) {
        res.push_back(minPrime[n]);
        n /= minPrime[n];
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(10000);
    vi a = factorize(10);
    return 0;
}
