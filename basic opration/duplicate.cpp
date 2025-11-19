#include <iostream>
using namespace std;

int remove(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
        return i + 1;
    }
}

int main()
{
    int arr[5] = {1, 2, 2, 3, 4};
    int n = 5;

    int i = remove(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}