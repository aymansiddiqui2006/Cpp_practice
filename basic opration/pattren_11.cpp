#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
    //for upper five rows
    for(int i =1; i<=n; i++){
        for(int j= 1; j<=i;j++ ){
            cout<<"*"<<" ";
        }
        cout<<"\n";
        }

    //for lower 4 rows    
    for(int i=n-1; i>=1; i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
        }    




}