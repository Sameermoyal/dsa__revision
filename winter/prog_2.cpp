#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

void checkFibonacciNumbers(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isFibonacci(arr[i])) {
            cout << arr[i] << " is a Fibonacci number." << endl;
        } else {
            cout << arr[i] << " is not a Fibonacci number." << endl;
        }
    }
}

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 8, 13, 21, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkFibonacciNumbers(arr, size);
    return 0;
    
}