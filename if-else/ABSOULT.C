#include <stdio.h>
int main()
{
    int n;int a;
    printf("Enter the number ");
    scanf("%d,&n");
    if (n > 0)
    {
        printf("THE VALUE IS %d", n);
    }
    if (n < 0)
    {  
        a = n * (-1);
        
    }
    printf("%d", a);
    return 0;
}