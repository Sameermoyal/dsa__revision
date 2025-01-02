#include<bits/stdc++.h>
using namespace std;

int multiplyByDigits(int num) {
    int product = 1, temp = num;
    while (temp > 0) {
        product *= temp % 10;
        temp /= 10;
    }
    return num * product;
}

void multiplyElementsByDigits(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = multiplyByDigits(arr[i]);
    }
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    multiplyElementsByDigits(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << "Result: " << arr[i] << endl;
    }
    return 0;
}