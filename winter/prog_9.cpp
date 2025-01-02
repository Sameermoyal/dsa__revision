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

void checkPalindromes(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isPalindrome(arr[i])) {
            cout << arr[i] << " is a palindrome." << endl;
        } else {
            cout << arr[i] << " is not a palindrome." << endl;
        }
    }
}

int main() {
    int arr[] = {121, 131, 123, 454, 789};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkPalindromes(arr, size);
    return 0;
}