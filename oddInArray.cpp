#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,4,3,5,6,7,2,4};
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<" ";
    cout<<"your odd number is: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2!=0)
        {
                cout<<arr[i]<<" ";
        }
        
    }
    

    // for (int i = 0; i < 9; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
}