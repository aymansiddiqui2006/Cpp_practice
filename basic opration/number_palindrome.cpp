#include <iostream>
using namespace std;

int main()
{
    int n;
    int rev = 0;
    cin >> n;
    int m = n;

    while (n != 0)
    {
        int rem = n % 10;

        rev = rev * 10 + rem;

        n = n / 10;
    }

    cout << rev << "\n";

    if (m == rev)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}
