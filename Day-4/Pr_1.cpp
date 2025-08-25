#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 4, 5, 6, 7, 8};
    int target = 2;
    int start = 0;
    int end = 5;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (target == arr[mid]) {
            cout << "Found at index: " << mid;
            return 0;
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Not found";
    return 0;
}
