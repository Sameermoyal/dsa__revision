#include<bits/stdc++.h>
using namespace std;

void checkDivisibilityByIndex(int arr[], int size) {
    for (int i = 1; i < size; ++i) { 
        if (arr[i] % i == 0) {
            cout << arr[i] << " is divisible by its index " << i << "." << endl;
        } else {
            cout << arr[i] << " is not divisible by its index " << i << "." << endl;
        }
    }
}

int main() {
    int arr[] = {0, 2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkDivisibilityByIndex(arr, size);
    return 0;
}