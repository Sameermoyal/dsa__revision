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

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

void factorialOfSumOfDigits(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        int sumDigits = sumOfDigits(arr[i]);
        cout << "Factorial of the sum of digits of " << arr[i] << " is " << factorial(sumDigits) << endl;
    }
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    factorialOfSumOfDigits(arr, size);
    return 0;
}