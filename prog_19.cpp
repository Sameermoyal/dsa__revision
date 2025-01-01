#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(arr[i], arr[size - i - 1]);
    }
}

void checkPalindromesInReversedArray(int arr[], int size) {
    reverseArray(arr, size);
    for (int i = 0; i < size; ++i) {
        if (isPalindrome(arr[i])) {
            cout << arr[i] << " is a palindrome." << endl;
        } else {
            cout << arr[i] << " is not a palindrome." << endl;
        }
    }
}

int main() {
    int arr[] = {121, 232, 345, 454, 565};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkPalindromesInReversedArray(arr, size);
    return 0;
}