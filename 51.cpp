#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;

    cout << "Enter the Number of rows - ";
    cin >> rows;

    cout << "Triangle of " << rows << " using characters -\n";

    // Main logic to print triangle. 
    for( int i = 0; i < rows; i++ ) {
        for( int j = 0; j <= i; j++ ){
            cout << (char)('A' + j) << " ";
        }
        cout<<endl;
    }

    return 0;
}
