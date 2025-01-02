#include<bits/stdc++.h>
using namespace std;

void productOfEvenElements(int arr[], int size) {
    int product = 1;
    bool hasEven = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            product *= arr[i];
            hasEven = true;
        }
    }
    if (hasEven) {
        cout << "Product of even elements: " << product << endl;
    } else {
        cout << "No even elements in the array." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    productOfEvenElements(arr, size);
    return 0;
}