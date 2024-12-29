/*Ques : Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three
points fall on one straight line.*/

#include <stdio.h>
int main()
{
    int x1, y1, y2, y3, x2, x3, B, A;
    printf("ENTER X1 = ");
    scanf("%d", &x1);
    printf("ENTER X2 = ");
    scanf("%d", &x2);
    printf("ENTER X3 = ");
    scanf("%d", &x3);
    printf("ENTER y1 = ");
    scanf("%d", &y1);
    printf("ENTER y2 = ");
    scanf("%d", &y2);
    printf("ENTER y3 = ");
    scanf("%d", &y3);
    A = (y2 - y1) / (x2 - x1);
    printf("A = %d\n", A);
    B = (y3 - y2) / (x3 - x2);
    printf("B = %d\n", B);
    if (A > B)
    {
        printf("Slop A is greater ");
    }
    else
    {
        printf("Slop B is greater ");
    }
    return 0;
}