#include <stdio.h>
#include <math.h>
int main()
{
    // square root
    int a;
    printf("square root\n");
    printf("Enter the NO :");
    scanf("%d", &a);
    int squareroot = sqrt(a);
    printf("THE SQUARE ROOT IS : %d\n", squareroot);
    // cube root
    float c;
    printf("cube root\n");
    printf("Enter the no :");
    scanf("%f", &c);
    float cuberoot = sqrt(c);
    printf("THE SQUARE ROOT IS : %f\n", cuberoot);
    // power
    printf("to find the power ");
    float b;
    printf("Enter the base :");
    scanf("%f", &b);
    float p;
    printf("Enter the power :");
    scanf("%f", &p);
    float power = pow(b, p);
    printf("%f is rasied to %f is %f : ", b, p, power);
    return 0;
}