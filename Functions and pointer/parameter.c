#include <stdio.h>
void oddeven(int x)
{
    
    if (x% 2 == 0)
        printf("%d IS EVEN",x);
    else
        printf("%d IS odd",x);
}
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    oddeven(a);
    return 0;
}