#include<iostream>
using namespace std;
int main(){
    int arr[]={10,15,25,0,2};
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<" ";

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    cout<<"your max elements is: "<<max;
    
}