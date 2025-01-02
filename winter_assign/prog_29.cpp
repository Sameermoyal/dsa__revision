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

void checkDivisibilityBySumOfDigits(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % sumOfDigits(arr[i]) == 0) {
            cout << arr[i] << " is divisible by the sum of its digits." << endl;
        } else {
            cout << arr[i] << " is not divisible by the sum of its digits." << endl;
        }
    }
}

int main() {
    int arr[] = {18, 23, 36, 45, 54};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkDivisibilityBySumOfDigits(arr, size);
    return 0;
}