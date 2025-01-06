#include<bits/stdc++.h>
using  namespace std;

//sort array

int main(){
   vector<int>arr={4,2,5,7,1} ;
   
   for(int i=0;i<arr.size();i++){
       int m=i;
       for(int j=i+1;j<arr.size();j++){
           if(arr[m]>arr[j]){
              m=j;
    
           }
           
         int t= arr[i];
         arr[i]=arr[m];
         arr[m]=t;
       }
   }
   
   for(auto it:arr){
       cout<<it<<" ";
   }
}