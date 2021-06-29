//Given an array a[] of size n. Output sum of each subarray of the given array.
#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int sum;
    int a[n];
    for (int i=0; i<n; i++){
        cin >>a[i];
    }

    for (int i=0; i<n; i++){
        sum=0;
        for (int j=i; j<n; j++){
            sum+=a[j];
          cout<<sum<<endl;  
        }
        
    }
    return 0;
}