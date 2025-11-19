
#include <iostream>
using namespace std;

// 0 0 1 1 2 3 5 8 .....
int main()
{
   int n;

   cin >> n;

   int a = 0;
   int b = 1;
   cout << a << " " << b << " ";

   for (int i = 0; i <= n; i++)
   {
      int nextnum = a + b;
      cout << nextnum << " ";

      a = b;
      b = nextnum;
   }
   cout << " ";
}