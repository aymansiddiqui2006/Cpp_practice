#include <bits/stdc++.h>
using namespace std;


bool palin( char ch[],  int s, int e){

    if(s>=e) {
        return true;}
    if (ch[s]!=ch[e]){
        return false;
    }
    
    return palin( ch, s+1,e-1) ;
     
    
}

int main(){
     char   ch[100];  
     int  s,e;
    cin>>ch;
    cin>>s>>e;
    cout<<(palin(ch,s,e) ?"true":"false");

}