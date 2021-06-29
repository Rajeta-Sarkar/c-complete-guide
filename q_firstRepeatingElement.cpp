/* Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 10^6               1sec=10^8 => solution should be of order O(n) 
0 <= Ai <= 10^6              or Soluiton of order of O(Ai)
*/         


// general solution - O(n^2)
/* int index (int arr[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                return i;
            }
        }
    }
    return -1;
} */

//Optimised approach
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    
    const int N=1e6 = 2;

    int idx[N];
    for (int i=0; i<N ; i++){
        idx[i]=-1;
    }
    int minidx = INT8_MAX;

    for (int i=0; i<n; i++){
        if (idx[a[i]] != -1) {minidx= min(minidx,idx[a[i]]);}
        else {idx[a[i]]=i;}
    }

    if (minidx == INT8_MAX){
        cout<<"-1";
    }
    else {
        cout<< minidx+1;
    }

    return 0;
}