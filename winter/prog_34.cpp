#include<bits/stdc++.h>
using namespace std;

void sumEvenProductOdd(int arr[], int size) {
    int sumEven = 0, productOdd = 1;
    bool hasOdd = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            productOdd *= arr[i];
            hasOdd = true;
        }
    }
    cout << "Sum of even numbers: " << sumEven << endl;
    if (hasOdd) {
        cout << "Product of odd numbers: " << productOdd << endl;
    } else {
        cout << "No odd numbers in the array." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumEvenProductOdd(arr, size);
    return 0;
}