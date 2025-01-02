#include<bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

void replaceWithNumberOfDigits(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = countDigits(arr[i]);
    }
}

int main() {
    int arr[] = {123, 4567, 89, 0, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    replaceWithNumberOfDigits(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << "Element: " << arr[i] << endl;
    }
    return 0;
}