#include<bits/stdc++.h>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappy(int num) {
    unordered_set<int> seen;
    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        num = sumOfSquares(num);
    }
    return num == 1;
}

void checkHappyNumbers(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isHappy(arr[i])) {
            cout << arr[i] << " is a happy number." << endl;
        } else {
            cout << arr[i] << " is not a happy number." << endl;
        }
    }
}

int main() {
    int arr[] = {19, 2, 3, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkHappyNumbers(arr, size);
    return 0;
}