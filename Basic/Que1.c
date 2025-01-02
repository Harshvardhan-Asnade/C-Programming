#include<stdio.h>
int main()
{      int i ;
        printf("Enter your Number = ");
        scanf("%d",&i);
        if(i<0){
            i = i * (-1);
        }
printf("the Absolute value is : %d", i);
    return 0;
}