#include<bits/stdc++.h>
using namespace std;

void sumEvenIndices(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    cout << "Sum of elements at even indices: " << sum << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumEvenIndices(arr, size);
    return 0;
}