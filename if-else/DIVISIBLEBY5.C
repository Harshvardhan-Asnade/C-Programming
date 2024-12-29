#include<stdio.h>
int main()
{   
    //take positive integer input and tell if it is even or odd
    int a ;
    printf("Enter your Number :");
    scanf("%d", &a);
    if (a%5 == 0){
        printf("DIVISIBLE BY 5",a); 
    printf("\n");

    }
    else{
 printf("NOT DIVISIBLE BY 5 ",a); 
printf("\n");
 

    return 0;
    }     
}