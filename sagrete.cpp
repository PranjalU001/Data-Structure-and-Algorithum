#include<iostream>
using namespace std;
void swap (int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}
void sagerat(int *arr,int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        while (arr[s]%2==0 &&s<e)
        {
            s++;
        }
        while (arr[e]%2!=0 && e>s)
        {
            e--;
        }
        if (s<e)
        {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        
    }
    
}
int main(){
    int arr[]={4,6,4,3,5,6,7,2,4};
    int n=sizeof(arr)/sizeof(int);
    // cout<<n<<" ";

    sagerat(arr,n);

    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }

}