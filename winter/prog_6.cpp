#include<bits/stdc++.h>
using namespace std;

int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

void productDigitsInArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Product of digits of " << arr[i] << " is " << productOfDigits(arr[i]) << endl;
    }
}

int main() {
    int arr[] = {123, 456, 789, 101, 202};
    int size = sizeof(arr) / sizeof(arr[0]);
    productDigitsInArray(arr, size);
    return 0;
}