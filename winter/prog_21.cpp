#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void sumDigitsAtIndices(int arr[], int size) {
    int sumOddIndices = 0, sumEvenIndices = 0;
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            sumEvenIndices += sumOfDigits(arr[i]);
        } else {
            sumOddIndices += sumOfDigits(arr[i]);
        }
    }
    cout << "Sum of digits at even indices: " << sumEvenIndices << endl;
    cout << "Sum of digits at odd indices: " << sumOddIndices << endl;
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumDigitsAtIndices(arr, size);
    return 0;
}