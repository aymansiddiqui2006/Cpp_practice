#include <bits/stdc++.h>
using namespace std;

void expalinpair(){
    pair<int, int >p={1,6};
    cout<<p.first<<" "<<p.second;
    
    cout<<endl;
    pair<int,pair<int , int>> ayman={3,{5,8}};
    cout<<ayman.second.second<<" "<<ayman.second.first<<" "<<ayman.first;
    cout<<endl;
    pair<int,int>arr[]={{1,2},{3,4}};
    cout<<arr[1].first<<"  "<<arr[2].second;
}
int main(){
    expalinpair();
    return 0;

}

