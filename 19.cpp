//  Write a program to multiply each element of an array with its next element.

#include<bits/stdc++.h>
using namespace std;


vector<int> multiplayNext(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        if(i==arr.size()-1){
            arr[i]=arr[i]*arr[0];
        }else{
            arr[i]=arr[i]*arr[i+1];
        }
    }
    
    return arr;
}

int main(){
  vector<int>arr={2,3,4,5} ;
  
 vector<int>result=multiplayNext(arr);
 
 for(auto it:result){
     cout<<it<<"\n";
 }
 
}