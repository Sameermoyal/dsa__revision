#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void checkPerfect(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (isPerfect(arr[i])) {
            cout << arr[i] << " is a perfect number." << endl;
        } else {
            cout << arr[i] << " is not a perfect number." << endl;
        }
    }
}

int main(){
    int arr[] = {6, 28, 496, 12, 97};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkPerfect(arr, size);
    return 0;
    
}