#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    void insertion(int val)
    {
        size = size + 1;
        int length = size;
        arr[length] = val;

        while (length > 1)
        {
            int parent = length / 2;
            if (arr[parent] < arr[length])
            {
                swap(arr[parent], arr[length]);
                length=parent;
            }

            else
            {
                return;
            }
        }
    }

    void display(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" -> ";
        }
    }
};

int main()
{
    heap h;
    h.insertion(60);
    h.insertion(16);
    h.insertion(10);
    h.insertion(50);
    h.insertion(8);
    h.insertion(20);
    h.insertion(15);
    h.insertion(30);
    
    h.display();

    return 0;
}