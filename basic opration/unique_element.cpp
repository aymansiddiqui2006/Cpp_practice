#include<iostream>
using namespace std;

int main(){
  int arr[5]={1,2,7,2,5};
  int n = sizeof(arr) / sizeof(arr[0]); 

    for(int i =0;i<n;i++){
        bool num=true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                num=false;
            }
           
        } 
         if(num){
            cout<<arr[i]<<" ";
         }
    }
}