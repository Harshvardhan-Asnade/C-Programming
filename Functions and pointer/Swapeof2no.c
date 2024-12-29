#include <stdio.h>
int main()
{
    int x, y;
    x = 9, y = 6;
    printf("%d %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d", x, y);
    return 0;
}