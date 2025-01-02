#include<bits/stdc++.h>
using namespace std;

void checkDivisors(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i + 1] % arr[i] == 0) {
            cout << arr[i] << " is a divisor of " << arr[i + 1] << endl;
        } else {
            cout << arr[i] << " is not a divisor of " << arr[i + 1] << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 4, 8, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkDivisors(arr, size);
    return 0;
}