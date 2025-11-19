#include <iostream>
using namespace std;
int rec(int num1, int num2)
{
    if (num1 > num2)
    {
        return 1;
    }
    cout << num1 << " ";
    rec(num1 + 1, num2);
}
int main()
{
    rec(1, 10);
    return 0;
}