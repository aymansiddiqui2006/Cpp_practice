#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int val)
    {
        data = val;
        next = NULL;
    }

    void display()
    {
        cout << data;
    }
};

int main()
{
    node n1(10);
    n1.display();

    return 0;
}