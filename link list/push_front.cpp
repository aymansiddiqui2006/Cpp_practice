#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class list
{
public:
    Node *head;
    Node *tail;

public:
    list()
    {
        head = tail = NULL;
    }
    void pushfront(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {

            newNode->next = head;
            head = newNode;
        }
    }
    void pushback(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void push(int val, int k)
    {
        if (k == 1)
        {
            pushfront(val);
            return;
        }
        int count = 1;
        Node *temp = head;
        while (temp != NULL && count < k - 1)
        {
            temp = temp->next;
            count++;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL)
        {
            tail = newNode;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};
int main()
{
    list l;
    l.pushfront(10);
    l.pushfront(90);
    l.pushfront(35);
    l.pushfront(40);
    l.pushfront(70);

    l.display();

    l.pushback(76);
    l.pushback(64);
    l.pushback(34);
    l.push(78,2);

    l.display();

    return 0;
}