#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array:";
    int size;
    cin>>size;
    int*arr=new int[size];
    cout<<"Enter the elememts of array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"this is your array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}