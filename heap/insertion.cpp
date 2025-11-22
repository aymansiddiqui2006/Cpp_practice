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
        int child = size;
        arr[child] = val;

        while (child > 1)
        {
            int parent = child / 2;
            if (arr[parent] < arr[child])
            {
                swap(arr[parent], arr[child]);
                child=parent;
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