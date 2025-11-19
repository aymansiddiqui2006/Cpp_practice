#include <iostream>
using namespace std;

/* void num(int i,int n){
    if (i>n) return ;

    cout<<i<<"\n";
    num(i+1,n);

} */

void num(int n)
{
    if (n == 0)
        return;
    num(n - 1);
    cout << n << " ";
}

void mun(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    mun(n - 1);
}

int main()
{
    int n;
    cin >> n;
    num(n);
    cout << "\n";
    mun(n);
}