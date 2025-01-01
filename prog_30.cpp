#include<bits/stdc++.h>
using namespace std;

void findMaxMinAtOddIndices(int arr[], int size) {
    int maxOdd = INT_MIN, minOdd = INT_MAX;
    for (int i = 1; i < size; i += 2) {
        if (arr[i] > maxOdd) maxOdd = arr[i];
        if (arr[i] < minOdd) minOdd = arr[i];
    }
    cout << "Maximum element at odd indices: " << maxOdd << endl;
    cout << "Minimum element at odd indices: " << minOdd << endl;
}

int main() {
    int arr[] = {12, 23, 34, 45, 56, 67, 78, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMaxMinAtOddIndices(arr, size);
    return 0;
}