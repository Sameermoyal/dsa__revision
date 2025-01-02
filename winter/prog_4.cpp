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

void sumDigitsInArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Sum of digits of " << arr[i] << " is " << sumOfDigits(arr[i]) << endl;
    }
}

int main() {
    int arr[] = {123, 456, 789, 101, 202};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumDigitsInArray(arr, size);
    return 0;
}