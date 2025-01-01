#include<bits/stdc++.h>
using namespace std;

void sumOfSquares(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Sum of squares of " << arr[i] << " is " << arr[i] * arr[i] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumOfSquares(arr, size);
    return 0;
}