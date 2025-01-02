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

vector<int> commonFactors(vector<int> a, vector<int> b) {
    vector<int> common;
    for (int i : a) {
        for (auto it = b.begin(); it != b.end(); ++it) {
            if (i == *it) {
                common.push_back(i);
                b.erase(it);
                break;
            }
        }
    }
    return common;
}

void findCommonPrimeFactors(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        vector<int> factorsArr = primeFactors(arr[i]);
        vector<int> factorsIndex = primeFactors(i);
        vector<int> common = commonFactors(factorsArr, factorsIndex);
        cout << "Common prime factors of " << arr[i] << " and index " << i << ": ";
        for (int factor : common) {
            cout << factor << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {12, 23, 34, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    findCommonPrimeFactors(arr, size);
    return 0;
}