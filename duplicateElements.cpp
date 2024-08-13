#include<iostream>
using namespace std ;
int main(){
    int size;
    cout<<"Enter the Size: ";
    cin>>size;
    int *arr =new int[size];
    cout<<"this is your size of the array :"<<size<<endl<<"Enter the Elements according the size :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"this is your array which you enter : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}