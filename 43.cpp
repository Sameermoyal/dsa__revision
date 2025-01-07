#include <bits/stdc++.h>
using namespace std;

//prime number

bool prime(int a){
    if(a<=1){
        return false;
    }
    
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            return false;
        }
    }
    
    return true;
}


void isPrime(int n){
    for(int i=1;i<=n;i++){
        if( prime(i) ){
        cout<<i<<" ";
            
        }
        
    }
    
}

int main()
{
   isPrime(50);
    return 0;
}