/*Given the length and breadth of a rectangle,
write a program to find whether the area of the
rectangle is greater than its perimeter.*/

#include <stdio.h>
int main()
{
    int Area, P, l, b;
    printf("Enter the lenght of a rectangle : ");
    scanf("%d", &l);
    printf("Enter the Width of a rectangle : ");
    scanf("%d", &b);
    Area = l * b;
    printf("Area : %d\n",Area);
    P = 2 * (l + b);
      printf("Perimeter : %d\n",P);
    if (Area > P)
    {
                printf("THE AREA OF RECTANGLE IS GREATER THEN PERIMETER i.e Area>Perimeter") ;
    }
    else
    {
        printf("THE AREA OF RECTANGLE IS SMALLER THEN PERIMETER i.e Area<Perimeter");
    }

    return 0;
}