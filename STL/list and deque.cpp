#include <bits/stdc++.h>
#include<list>
#include<deque>
using namespace std;

/* In C++, list container implements a doubly linked list in which each element contains the address of next
 and previous element in the list. It stores data in non-contiguous memory,
 hence providing fast insertion and deletion once the position of the element is known.*/

int main()
{
    list<int> l = {1, 3, 4, 5};

    for (int t : l)
    {
        cout << t<<" ";
    }
    l.push_front(10);

    cout << "\n";

    for (int p : l)
    {
        cout << p<<" ";
    }

   /*not valid 
   cout<<"\n"<<l[2]; */

   deque<int> d={4,6,1,7};
   cout<<"\n"<<d[3]<<endl;

   for(int v: l){
    cout<<v;
   }
}