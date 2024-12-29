/*Ques : Take 3 numbers input and tell if they
can be the sides of a triangle.*/

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
    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("Vaild Triangle");
    }
    else{
        printf("InVaild Triangle");
    }

    return 0;
}