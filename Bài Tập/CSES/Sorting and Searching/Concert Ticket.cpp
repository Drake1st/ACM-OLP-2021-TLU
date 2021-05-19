#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
    unsigned long long int n, m, b, a;
    cin >> n >> m;
    multiset< unsigned long long,greater <int> > x;
 
    for(int i = 0 ; i< n; i++)
    {
        cin >> a;
        x.insert(a);
    }
 
    for(int i = 0 ; i< m; i++)
    {
        cin >> b;
        auto ans = x.lower_bound(b);
        if (ans == x.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *ans << endl;
            x.erase(ans);
        }
    }
    return 0;
}