#include <bits/stdc++.h>
using namespace std;

/* In C++, pair is used to combine together two values that may be of
 different data types or same data types as a single unit. The first element is stored as a
  data member with name 'first' and the second element as 'second'.*/
int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl; // 1 2

    pair<int, pair<int, int>> x = {3, {5, 7}};
    cout << x.second.second << " " << x.first << " " << x.second.first << endl; // 7 3 5
}