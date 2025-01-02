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

void subtractSumOfDigits(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int result = sumOfDigits(arr[i]) - sumOfDigits(arr[i + 1]);
        cout << "Result for element " << arr[i] << ": " << result << endl;
    }
}

int main() {
    int arr[] = {123, 456, 789, 101, 202};
    int size = sizeof(arr) / sizeof(arr[0]);
    subtractSumOfDigits(arr, size);
    return 0;
}