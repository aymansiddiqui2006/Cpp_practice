#include <iostream>
using namespace std;

int pas(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int line(int n)
{
    long long res = 1;
    cout<<res<<" ";
    for (int i = 1; i < n; i++)
    {
        res = res * (n - i);
        res = res / (i);
        cout << res << " ";
    }
    
    
}

int main()
{
    int n = 5;
    int r = 3;
    n = n - 1;
    r = r - 1;
    cout << pas(n, r)<<"\n";
    cout<<line(n);
}