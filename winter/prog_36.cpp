#include<bits/stdc++.h>
using namespace std;

int countEvenDivisors(int num) {
    int count = 0;
    for (int i = 2; i <= num; i += 2) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

void evenDivisorsInArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Number of even divisors of " << arr[i] << " is " << countEvenDivisors(arr[i]) << endl;
    }
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    evenDivisorsInArray(arr, size);
    return 0;
}