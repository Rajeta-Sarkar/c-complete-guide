#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <vector>

using namespace std;

// BEGIN NO SAD
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
typedef vector<int> vi;

// END NO SAD

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<vector<ll>> matrix;
typedef pair<ll, ll> pll;
vector <int> v;

std::vector<int> adj[1004];
int cl[1004];

void dfs(int u, int c) {
	cl[u] = c;
	for (int v : adj[u]){ 
    //cout<<"v = "<<v<<endl;
    //cout<<"adj[u] = "<<adj[u]<<" u = "<<u<<endl;
		if (!cl[v]) 
			dfs(v, 3 - c);}
}

void dfs1(int u) {
	cl[u] = 0;
	for (int v : adj[u]) 
		if (cl[v]) 
			dfs1(v);	
}
void rsolve(){
  int n;
		cin >> n;
		if (!(n & 1)) {
			for (int i = 0; i < n; ++i)
				adj[i].clear();
			memset(cl, 0, sizeof(cl));
			for (int i = 0; i < n; i += 2) {
				adj[i].pb(i + 1);
				adj[i + 1].pb(i);
        		//cout<<"adj[i] = "<<adj[i]<<endl;
        		//cout<<"adj[i+1] = "<<adj[i+1]<<endl;
			}
			for (int i = 0; i < n; i += 2) {
				int u, v;
				cin >> u >> v;
				u--, v--;
       			//cout<<"u = "<<u<<endl;
        		//cout<<"v = "<<v<<endl;
				adj[u].pb(v);
				adj[v].pb(u);
			}
			for (int i = 0; i < n; ++i)
				if (!cl[i])
					dfs(i, 1);// cout<<"dfs(i,1) = "<<dfs(i,1)<<" i = "<<i<<endl;
					
			for (int i = 0; i < n; ++i) {
				if (cl[i] == 1) {
					cout << "L";
				} else {
					cout << "R";
				}
			}
		} else {
			for (int i = 0; i < n; ++i)
				adj[i].clear();
			memset(cl, 0, sizeof(cl));
			for (int i = 0; i < n - 1; i += 2) {
				adj[i].pb(i + 1);
				adj[i + 1].pb(i);
			}
			int diff;
			cin >> diff;
			diff--;
			for (int i = 0; i < n - 1; i += 2) {
				int u, v;
				cin >> u >> v;
				u--, v--;
				adj[u].pb(v);
				adj[v].pb(u);
			}
			for (int i = 0; i < n; ++i)
				if (!cl[i])
					dfs(i, 1);
			if (cl[diff] != cl[n - 1]) {
				dfs1(n - 1);
				dfs(n - 1, cl[diff]);
			}
			for (int i = 0; i < n; ++i) {
				if (cl[i] == 1) {
					cout << "L";
				} else {
					cout << "R";
				}
			}
			// for (int i = 0; i < n - 1; i += 2)
			// 	assert(cl[i] != cl[i + 1]);
			// assert(cl[diff] == cl[n - 1]);
		}
		cout << "\n";

  
}

void solve() {
  int t;
  cin >> t;
  for(int casenum = 1; casenum <= t; casenum++) {
    cout << "Case #" << casenum << ": ";
    rsolve();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  solve();
}