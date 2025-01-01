#include<bits/stdc++.h>
using namespace std;

bool isTriangular(int num) {
    int n = (-1 + sqrt(1 + 8 * num)) / 2;
    return n * (n + 1) / 2 == num;
}

void checkTriangularNumbers(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isTriangular(arr[i])) {
            cout << arr[i] << " is a triangular number." << endl;
        } else {
            cout << arr[i] << " is not a triangular number." << endl;
        }
    }
}

int main() {
    int arr[] = {1, 3, 6, 10, 15, 21, 28, 36};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkTriangularNumbers(arr, size);
    return 0;
}