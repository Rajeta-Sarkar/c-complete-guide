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
vector <int> s;

void rsolve(){
    int n; cin>>n;
    int num;
    
    for (int i=0; i<n; i++){
        cin>>num;
        cin>>s.push_back(num);
    }
    
    int a = *min_element(a.begin(), a.end());
    if ( a== 10){
        cout<<"7";
    }
    else if(a == 7){
        cout<<"5";
    }
    else 
    {cout<<"3"}
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