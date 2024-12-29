#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
     printf("Enter b : ");
     int power= 1;
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
         power=power*a;
    }
    printf("%d rasie to the power %d is %d",a,b,power);
    return 0;
}