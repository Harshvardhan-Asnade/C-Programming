#include <stdio.h>

int main()
{
    printf("\n");

    int x = 6;
    int *z = &x;
    printf("%p\n", *z);
    *z = 2;

    printf("%p\n", *z);
    printf("\n\n");
    return 0;
}
