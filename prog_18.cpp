#include<bits/stdc++.h>
using namespace std;

void cumulativeSum(int arr[], int size) {
    int cumSum = 0;
    for (int i = 0; i < size; ++i) {
        cumSum += arr[i];
        cout << "Cumulative sum up to index " << i << " is " << cumSum << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cumulativeSum(arr, size);
    return 0;
}