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

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void lcmWithIndex(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "LCM of " << arr[i] << " and index " << i << " is " << lcm(arr[i], i) << endl;
    }
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    lcmWithIndex(arr, size);
    return 0;
}