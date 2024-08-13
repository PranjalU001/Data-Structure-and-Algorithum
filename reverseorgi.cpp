#include<iostream>
using namespace std;
void swap (int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}
void reverseArray(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}
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
    reverseArray(arr,size);
    cout<<"Your reverse array:";
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
}