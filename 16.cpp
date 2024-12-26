#include<bits/stdc++.h>
using namespace std;

//Find the second largest element in an array.

int main(){
    int arr[6]={8,3,6,10,1,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=arr[0],sl=arr[1];
    
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
    }
    
    cout<<sl;
    
}