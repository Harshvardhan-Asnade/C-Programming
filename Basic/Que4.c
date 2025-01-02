#include<stdio.h>
int main()
{      int i ;
        printf("Enter your Number :");
        scanf("%d",&i);
        if(i%3==0 && i%5==0){
           printf("divisble by 3 & 5");
        }
        else    {
      printf("Not divisible by 3 & 5");
        }
        

    return 0;
}