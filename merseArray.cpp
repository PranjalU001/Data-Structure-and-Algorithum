#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {0, 1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8, 9};

    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    int k = 0;
    int *arr = new int[k];
    for (int i = 0; i < n1; i++)
    {
        arr[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr[k++] = arr2[i];
    }
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}