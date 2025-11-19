#include<bits/stdc++.h>
using namespace std;


void selection_sort(int arr[], int n){
     // selection sort code
    for(int i=0; i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[i],arr[min]);
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

    selection_sort(arr,n);

    cout<<"after sorting"<<endl; 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }




}