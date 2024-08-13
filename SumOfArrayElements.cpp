#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,4,3,5,6,7,2,4};
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"sum of array elements: ";
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;


}