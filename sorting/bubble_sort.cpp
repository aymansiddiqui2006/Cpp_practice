#include<iostream>
using namespace std;

int bubble_sort(int arr[], int n){
    for(int i=0 ;i<n;i++){
        for(int j =0; j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[100],n;

    cout<<"enter ther number of index : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"before sorting"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    bubble_sort(arr,n);

    cout<<"after sorting"<<endl; 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }





}