#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  
  unsigned long long int a, b,sum = 0;
  cin >> a;
  for (int i = 1; i < n; i++) {
    cin >> b;
    if (b < a) sum += a - b;
    else a = b;
  }
  cout << sum << endl;
}
