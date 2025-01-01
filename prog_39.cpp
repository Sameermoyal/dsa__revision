#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int num) {
    if (num < 1) return false;
    while (num % 3 == 0) {
        num /= 3;
    }
    return num == 1;
}

void checkPowerOfThree(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isPowerOfThree(arr[i])) {
            cout << arr[i] << " is a power of 3." << endl;
        } else {
            cout << arr[i] << " is not a power of 3." << endl;
        }
    }
}

int main() {
    int arr[] = {1, 3, 9, 27, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkPowerOfThree(arr, size);
    return 0;
}