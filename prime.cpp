#include<iostream>
using namespace std;
bool check_prime(int n){
    if(n==0||n==1){
        return false;
    }
    else{
        for (int i = 2; i <n; i++)      {
           if (n%i==0)
           {
            return false;
           }
           
        }
        
    }
    return true;
}
int main(){
   int arr[]={2,4,5,6,7,9,11,21};

   int n=sizeof(arr)/sizeof(int);
   for (int i = 0; i < n; i++)
   {
    if(check_prime(arr[i])){           
        cout<<arr[i]<<" ";
    }
   }
   
}