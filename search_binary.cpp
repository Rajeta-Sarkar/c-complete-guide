#include<iostream>
using namespace std;
//the elements in the array should be in sorted order
int binarysearch (int arr[], int s, int e, int num){
    int mid;
    while (s<=e){
        mid=(s+e)/2;
        if(arr[mid]==num){
            return mid;
        } else if (arr[mid]<num){
            s=mid+1;
        } else {
            e=mid-1;
        }  
    } 
    return -1; 
}

int main(){
    int n; cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ele; cin>>ele;
    cout<<binarysearch(arr,0,n-1,ele);
}