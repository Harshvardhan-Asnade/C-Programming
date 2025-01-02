/*Ques : Take 3 positive integers input and print
the greatest of them.*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter A Number : ");
    scanf("%d", &a);
    printf("Enter C Number : ");
    scanf("%d" , &b);
    printf("Enter B Number : ");
    scanf("%d" , &c);
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    if (a > b && a > c)
    {
        printf("A is Greatest");
    }
    if (b > a && b > c)
    {
        printf("B is Greatest");
    }
    if (c > a && c > b)
    {
        printf("C is Greatest");
    }

    return 0;
}