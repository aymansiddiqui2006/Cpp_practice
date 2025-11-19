#include<iostream>
using namespace std;

int rot(int arr[],int n){
    int m=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=m;

}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // creating array of size n

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rot(arr,n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}