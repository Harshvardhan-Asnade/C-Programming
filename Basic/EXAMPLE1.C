/*Take two integers input, a and b : a>b, and find the
remainder when a is divided by b & print the remainder*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st No = ");
    scanf("%d", &a);
    printf("Enter 2nd No = ");
    scanf("%d", &b);
    int r, q;
    q = a / b;
    r = a - (b * q);
    printf("The Remaider when %d is dived by %d is : %d", a, q, r);

    return 0;
}