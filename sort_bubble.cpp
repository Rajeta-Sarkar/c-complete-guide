//repetedly swap two adjacent elements if they are in wrong order
// for n size array - the number of iterations requires is n-1
// first iteration n-1
// 2nd             n-2 and so on
// ith             n-i 
#include<iostream>
using namespace std;
int main (){
    int n,temp; cin>>n;
    int arr[n];
    for (int i =0; i < n; i++){
        cin>>arr[i];
    }

    int counter=1;
    while (counter < n-1)           //n-1 = iterations
    {   for (int i=0; i<n-counter; i++){  //comparision of unsorted elements till n-counter => n-1 n-1 n-1 .. n-i
            if (arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i]; 
                arr[i]=temp;
            }
        }
        counter++;
    }
    
    
    for (int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}