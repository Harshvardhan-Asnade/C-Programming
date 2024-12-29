#include <stdio.h>
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    printf("ENTER A NO :");
    scanf("%d", &a);
    printf("ENTER B NO :");
    scanf("%d", &b);
    int m = min(a, b);
    printf("MIN of %d and  %d is %d" ,a, b, m);
    
    return 0;
}
