#include<bits/stdc++.h>
using namespace std;

void checkMultipleOfFive(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 5 == 0) {
            cout << arr[i] << " is a multiple of 5." << endl;
        } else {
            cout << arr[i] << " is not a multiple of 5." << endl;
        }
    }
}

int main() {
    int arr[] = {10, 23, 35, 47, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkMultipleOfFive(arr, size);
    return 0;
}