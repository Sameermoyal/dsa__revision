#include<bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int num) {
    vector<int> factors;
    for (int i = 2; i * i <= num; ++i) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    if (num > 1) factors.push_back(num);
    return factors;
}

void sumOfPrimeFactors(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        vector<int> factors = primeFactors(arr[i]);
        int sum = 0;
        for (int factor : factors) {
            sum += factor;
        }
        cout << "Sum of prime factors of " << arr[i] << " is " << sum << endl;
    }
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumOfPrimeFactors(arr, size);
    return 0;
}