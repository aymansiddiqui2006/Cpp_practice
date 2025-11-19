#include<iostream>
using namespace std;

int check(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return -1;
        }
    } 
    return 1;
}

int main(){
    int arr[6]={1,2,2,3,4,5};
    int n=6;
    
    int result =check(arr,n);
    if(result!=-1){
        printf("sorted");
    }
    else
    printf("unsorted");

    return 0;

}