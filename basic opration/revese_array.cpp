#include <iostream>
using namespace std;

void rev(int arr[], int f, int e)
{
    if (f >= e)
        return;
    swap(arr[f], arr[e]);
    rev(arr, f + 1, e - 1);
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rev(arr, 0, n - 1);

    cout << "Array after reversing from index : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}