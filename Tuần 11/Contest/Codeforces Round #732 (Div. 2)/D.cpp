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
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);

 
// Returns (a * b) % mod
long long moduloMultiplication(long long a, long long b,
                               long long mod)
{
 
    // Initialize result
    long long res = 0;
 
    // Update a if it is more than
    // or equal to mod
    a %= mod;
 
    while (b) {
 
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % mod;
 
        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % mod;
        b >>= 1; // b = b / 2
    }
    return res;
}
 
// C++ function for extended Euclidean Algorithm
long long int gcdExtended(long long int a, long long int b,
                          long long int* x,
                          long long int* y);
 
// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't exists
long long int modInverse(long long int b, long long int m)
{
 
    long long int x, y; // used in extended GCD algorithm
    long long int g = gcdExtended(b, m, &x, &y);
 
    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;
 
    // m is added to handle negative x
    return (x % m + m) % m;
}
 
// C function for extended Euclidean Algorithm (used to
// find modular inverse.
long long int gcdExtended(long long int a, long long int b,
                          long long int* x,
                          long long int* y)
{
 
    // Base Case
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
 
    // To store results of recursive call
    long long int x1, y1;
 
    long long int gcd = gcdExtended(b % a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
 
// Function to compute a/b under modlo m
long long int modDivide(long long int a, long long int b,
                        long long int m)
{
 
    a = a % m;
    long long int inv = modInverse(b, m);
    if (inv == -1)
        // cout << "Division not defined";
        return 0;
    else
        return (inv * a) % m;
}
 
// Function to calculate nCr % p
ll nCr(int n, int r, int p)
{
 
    // Edge Case which is not possible
    if (r > n)
        return 0;
 
    // Optimization for the cases when r is large
    if (r > n - r)
        r = n - r;
 
    // x stores the current result at
    long long int x = 1;
   
    // each iteration
    // Initialized to 1 as nC0 is always 1.
    for (int i = 1; i <= r; i++) {
 
        // Formula derived for calculating result is
        // C(n,r-1)*(n-r+1)/r
        // Function calculates x*(n-i+1) % p.
        x = moduloMultiplication(x, (n + 1 - i), p);
       
        // Function calculates x/i % p.
        x = modDivide(x, i, p);
    }
    return x;
}
 




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int tt ;
    cin >> tt ;
    while(tt--){
        int n;
        cin >>n;
        vector <int> arr(n);
        string s; cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1') arr[i]=1;
            else arr[i]=0;
        }
        ll pair_1 = 0,number_0 = 0;
        if(!arr[0]) number_0++;
        for(int i=1;i<n;i++){
            if(arr[i]==0) number_0++;
            else if(arr[i]&&arr[i-1]){ pair_1++; arr[i]=0;}
        }
        long long int  p = 998244353;
        cout <<nCr(pair_1+number_0,number_0,p)<<endl;
       
    }
    
    return 0;
}
