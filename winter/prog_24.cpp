#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int num) {
    return num > 0 && (num & (num - 1)) == 0;
}

void checkPowerOfTwo(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isPowerOfTwo(arr[i])) {
            cout << arr[i] << " is a power of 2." << endl;
        } else {
            cout << arr[i] << " is not a power of 2." << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8, 16, 32};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkPowerOfTwo(arr, size);
    return 0;
}