#include<bits/stdc++.h>
using namespace std;

void replaceWithIndexSquared(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i * i;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    replaceWithIndexSquared(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << "Element: " << arr[i] << endl;
    }
    return 0;
}