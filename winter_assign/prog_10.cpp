#include<bits/stdc++.h>
using namespace std;

int highestDivisor(int num) {
    for (int i = num / 2; i >= 1; --i) {
        if (num % i == 0) {
            return i;
        }
    }
    return 1; 
}

void highestDivisorsInArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Highest divisor of " << arr[i] << " is " << highestDivisor(arr[i]) << endl;
    }
}

int main() {
    int arr[] = {10, 15, 21, 28, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    highestDivisorsInArray(arr, size);
    return 0;
}