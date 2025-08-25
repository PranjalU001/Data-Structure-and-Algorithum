// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int number;
//     cin >> number;
//     int i = 0;
//     long ans = 0;
//     long digit;

//     while (number != 0) {
//         digit = number & 1;                  // last bit nikali
//         ans = ans + (digit * pow(10, i));    // ans me add kiya
//         number = number >> 1;                
//         i++;
//     }

//     cout << ans;
// }
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << bitset<32>(n);
}
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string n;       // binary ko string me lo, e.g. "101"
    cin >> n;

    bitset<32> b(n); // binary string ko bitset me convert
    cout << b.to_ulong();        // uska decimal n

}