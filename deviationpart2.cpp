#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <vector>

using namespace std;

const int MAXN = 300;
const int INF = 1e9;

int dp[2][2][2][2][MAXN];
int cl[104];

int main() {
	//assert(freopen("input.txt", "r", stdin));
	//assert(freopen("output.txt", "w", stdout));
	
	ios_base::sync_with_stdio(false);
	cout<<0x3f<<endl<<0x80<<endl;
    memset(cl,128,sizeof(cl));
    for (int i=0; i<5; i++)
    cout<<cl[i]<<endl;
	return 0;
}
