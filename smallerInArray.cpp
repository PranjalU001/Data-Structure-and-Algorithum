#include<iostream>
using namespace std;
int main(){
    int arr[]={10,15,25,25,2};
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<" ";

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min;
    min=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    cout<<"your smaller number in array is :"<<min;
}