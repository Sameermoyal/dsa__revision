//15.Write a program that converts each element in the array to a string and stores the results in a new array.
#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[5]={2,3,4,5,66};
 
   vector<string>result(5);
   
   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
      result[i]=to_string(arr[i]);
      
   }
   
   for(int i=0;i<result.size();i++){
      cout<<result[i]<<" ";
   }
   
  

    
}