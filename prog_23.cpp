#include<bits/stdc++.h>
using namespace std;

void replaceWithDifference(int arr[], int size) {
    int maxElement = *max_element(arr, arr + size);
    int minElement = *min_element(arr, arr + size);
    int difference = maxElement - minElement;
    for (int i = 0; i < size; ++i) {
        arr[i] = difference;
    }
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    replaceWithDifference(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << "Element: " << arr[i] << endl;
    }
    return 0;
}