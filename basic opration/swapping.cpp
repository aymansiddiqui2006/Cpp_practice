#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], f, e;

    cout << "enter the index : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the index to swap ";

    cin >> f >> e;

    swap(arr[e], arr[f]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
