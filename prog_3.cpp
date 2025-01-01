#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

bool isStrong(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}

void checkStrongNumbers(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isStrong(arr[i])) {
            cout << arr[i] << " is a strong number." << endl;
        } else {
            cout << arr[i] << " is not a strong number." << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 145, 40585, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkStrongNumbers(arr, size);
    return 0;
}