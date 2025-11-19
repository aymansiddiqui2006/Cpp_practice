#include<stdio.h>
int main ()
{
    int a, b, add;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    add = a + b;
    printf("Addition of a and b is: %d\n", add);  // 👈 Output added
    return 0;
}
