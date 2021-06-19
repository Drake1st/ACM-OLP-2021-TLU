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


class Graph {

    int V;

    list<int>* adj;

    void DFSUtil(int v, bool visited[]);
 
public:

    Graph(int V);
 
    void addEdge(int v, int w);
    int NumberOfconnectedComponents();
};

int Graph::NumberOfconnectedComponents()
{
 

    bool* visited = new bool[V];

    int count = 0;
    for (int v = 0; v < V; v++)
        visited[v] = false;
 
    for (int v = 0; v < V; v++) {
        if (visited[v] == false) {
            DFSUtil(v, visited);
            count += 1;
        }
    }
 
    return count;
}
 
void Graph::DFSUtil(int v, bool visited[])
{

    visited[v] = true;

    list<int>::iterator i;
 
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}


ll modpow( ll x, ll n) {
    if (n == 0) 
        return 1;
    ll u = modpow(x, n >> 1);
    u = (u*u)%MOD;
    if (n & 1) 
        u = (u*x)%MOD;
    return u;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ;
    cin >> tt ;
    while(tt--){
        int n ;
        cin >> n ;
        vi a(n);
        vi b(n);
        for(auto &item:a) cin>>item;
        for(auto &item:b) cin>>item;
        Graph g(n);
        for(int i=0;i<n;i++)   { g.addEdge(a[i]-1,b[i]-1);}
        ll c = g.NumberOfconnectedComponents();
        cout<<modpow(2,c)<<endl;
        
    }
    
    return 0;
}
