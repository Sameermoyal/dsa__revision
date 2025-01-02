#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}

void checkPerfectSquares(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isPerfectSquare(arr[i])) {
            cout << arr[i] << " is a perfect square." << endl;
        } else {
            cout << arr[i] << " is not a perfect square." << endl;
        }
    }
}

int main() {
    int arr[] = {1, 4, 9, 16, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkPerfectSquares(arr, size);
    return 0;
}