#include<bits/stdc++.h>
using namespace std;

void sumEvenOdd(int arr[], int size) {
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    cout << "Sum of even elements: " << sumEven << endl;
    cout << "Sum of odd elements: " << sumOdd << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumEvenOdd(arr, size);
    return 0;
}