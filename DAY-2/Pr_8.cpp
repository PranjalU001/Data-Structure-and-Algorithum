#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num = 'A' + i;   
        for (int j = 0; j < n; j++) {
            cout << char(num + j) << " ";
        }
        cout << endl;
    }
    return 0;
}
