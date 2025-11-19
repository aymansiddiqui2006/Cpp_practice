#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int sum = 0;

    while (n != 0)
    {
        int d = n % 10;
        int s = pow(d, 3);
        sum = sum + s;
        n = n / 10;
    }

    if (m == sum)
    {
        cout << sum << "amstrong number";
    }

    else
    {
        cout << sum << " not amstrong number";
    }

    return 0;
}