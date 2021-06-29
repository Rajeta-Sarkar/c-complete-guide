//Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n,mx; cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    mx=-19999; 

    for (int i=0; i<n; i++){
       mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
}