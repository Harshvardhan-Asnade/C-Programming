#include <stdio.h>
int main()
{
    int a,b;
    a = 9, b = 6;
    printf("%d %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
    return 0;
}