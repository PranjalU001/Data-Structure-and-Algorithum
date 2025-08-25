#include<iostream>
using namespace std;
int main(){
    int n =5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < i; s++) {
            cout << "  ";  // 2 spaces for alignment
        }
        // numbers
        for (int j = n - i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}}