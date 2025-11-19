#include <bits/stdc++.h>
using namespace std;

/* C++ vector is a dynamic array that stores collection of elements same type in contiguous memory. 
It has the ability to resize itself automatically when an element is inserted or deleted.*/

int main()
{
    vector<int> v = {1, 3, 4};
    // adding/putting value in vector
    v.push_back(7);
    v.emplace_back(10);
    v.push_back(90);

    // using vector function
    cout << "the vector is using function : " << endl;
    for (int t : v)
    {
        cout << t << " ";
    }

    // poping the value from the vector
    v.pop_back();

    cout << "\nthe vector is using for loop after poping :" << endl;
    // using for loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }

    cout << "\nsize of vector : " << v.size() << endl;
    cout << "\ncapacity of vector : " << v.capacity() << endl;

    cout << "back  is  :" << v.back() << endl;
    cout << " front is : " << v.front() << endl;

    // 2nd vector
    vector<int> v1 = {1, 5, 9, 2, 9, 7};
    cout << "vector 2 is : " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << " " << v1[i];
    }
    cout << "\n";

    // vector v3
    vector<int> v2(3, 59);
    cout << "vetor 3 is : " << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << " " << v2[i];
    }
    cout << "\n";

    return 0;
}