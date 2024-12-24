#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[]={5,4,3,2,1};
   //left rotate
   int n=sizeof(arr)/sizeof(arr[0]);
   
   for(int i=0;i<n;i++){
    arr[i]=arr[((n-1)+i)%n];
   }
   
   for(auto it:arr){
       cout<<it<<" ";
   }
   
}