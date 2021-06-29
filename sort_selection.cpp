#include<iostream>
using namespace std;
// find the min element in the unsorted array and swap it with the element in the beginning
void selectsort (int arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    selectsort(a,n);
    return 0;
}