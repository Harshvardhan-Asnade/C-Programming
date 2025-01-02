/*If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred.*/
#include <stdio.h>
int main()
{
    int a, b, cp, sp, d;
    printf("Enter Cost Price of Pen :");
    scanf("%d", &cp);
    printf("Enter Selling price of pen :");
    scanf("%d", &sp);
    a = sp - cp;
    b = sp - cp;

    if (sp > cp)
    {
        printf("profit : %d", a);
        printf("\n");
    }
    else
    {
        printf("loss : %d", b);

        return 0;
    }
}