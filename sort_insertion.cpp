// C++ program for insertion sort
//#include <bits/stdc++.h>
//take the element from unsorted array and insert it to the right place in the sorted array
// and shift all the elements by 1 on the right side
#include <iostream>
using namespace std;
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
/* Driver code */
int main()
{   int n; cin>>n;
    int arr[n]; 
    /* = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]); */
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}