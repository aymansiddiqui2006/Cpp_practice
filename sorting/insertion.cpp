#include<iostream>
using namespace std;

int insertion_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    }
    
}

int main(){
    int arr[4]={23,56,85,12};
    insertion_sort(arr,4);
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }

    return 0;

}