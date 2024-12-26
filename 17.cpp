#include<bits/stdc++.h>
using namespace std;

//Count the frequency of each unique element in the array.An array of size n.

int main(){
    int arr[9]={8,3,6,10,1,1,8,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    map<int,int>mapp;
    
    for(int i=0;i<n;i++){
        if(mapp[arr[i]]){
            mapp[arr[i]]+=1;
        }else{
            mapp[arr[i]]=1;
        }
    }
    
   for(auto it:mapp){
       cout<<it.first<< " "<<it.second<<endl;
   }

    
}