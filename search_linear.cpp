#include <iostream>
using namespace std;
linearsearch(int arr[], int n, int k) //f you do not specify a return type or parameter type,
                                      // C will implicitly declare it as int.
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "key: ";
    cin >> key;
    cout << linearsearch(arr, n, key);

    return 0;
}