#include<iostream>
using namespace std;
int main(){
    int arr[5]{2,3,4,5,6};
    cout<<"THIS IS YOUR ARRAY: ";
    for (int i = 0; i < 5; i++)
    {
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"THIS IS YOUR ALTERNATE SWIPING ARRAY: ";
    int start=0;
    int end=start+1;
    while (end<5)
    {
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
    for (int i = 0; i < 5; i++)
    {
            cout<<arr[i]<<" ";
    }
}