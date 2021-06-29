/* Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2 */

#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    const int N = 1e6+2; //10^6
    bool check[N]= {0};
    for (int i=0; i<n; i++){
        if (a[i]>=0){
            check[a[i]]=1;
        }
    }
    int ans=-1;
    for (int i=1; i<N; i++){
        if (check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}