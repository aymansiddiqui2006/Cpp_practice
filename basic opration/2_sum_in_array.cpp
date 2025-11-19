#include <iostream>
using namespace std;

pair<int, int> sum(int arr[], int left, int right, int target)
{
    if (left >= right)
        return {-1, -1};

    int add = arr[left] + arr[right];
    if (add == target)
        return {left, right};
    else if (add < target)
    {
        return sum(arr, left + 1, right, target);
    }
    else
        return sum(arr, left, right - 1, target);
}

int main()
{
    int arr[5] = {2, 6, 8, 10, 11};
    int n = 5;
    int left = 0, right = n - 1, target;
    cout << "enter the number :" << endl;
    cin >> target;
    pair<int, int> result = sum(arr, left, right, target);
    if (result.first != -1)
    {
        cout << "found at indexes " << "{" << result.first << " , " << result.second << "}" << endl;
    }
    else
    {
        cout << "not found";
    }

    return 0;
}