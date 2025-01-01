#include<bits/stdc++.h>
using namespace std;

int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

void reverseDigitsInArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = reverseDigits(arr[i]);
    }
}

int main() {
    int arr[] = {123, 456, 789, 101, 202};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseDigitsInArray(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << "Reversed: " << arr[i] << endl;
    }
    return 0;
}