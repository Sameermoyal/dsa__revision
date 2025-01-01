#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}

void replaceWithSquareRoot(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isPerfectSquare(arr[i])) {
            arr[i] = sqrt(arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 4, 9, 16, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    replaceWithSquareRoot(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << "Element: " << arr[i] << endl;
    }
    return 0;
}