#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,4,3,5,6,7,2,4};
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<" ";
    cout<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=size-1 ; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    
}