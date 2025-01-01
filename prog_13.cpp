#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void gcdWithIndex(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "GCD of " << arr[i] << " and index " << i << " is " << gcd(arr[i], i) << endl;
    }
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    gcdWithIndex(arr, size);
    return 0;
}