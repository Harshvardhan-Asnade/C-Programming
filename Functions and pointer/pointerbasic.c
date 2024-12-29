#include <stdio.h>
int main()
{
    printf("\n");
    int x = 9;
    int *z = &x;
    int y = 9;
    int *z1 = &y;
    printf("%p ", z);
    printf("%p\n ", z1);
    printf("\n\n");
    return 0;
}