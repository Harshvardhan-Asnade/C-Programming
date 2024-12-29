#include<stdio.h>
int main()
{   
    //take positive integer input and tell if it is even or odd
    int a ;
    printf("Enter your Year : ");
    scanf("%d", &a);
    if (a%2 == 0){
        printf("this year is a leap Year",a); 
    printf("\n");

    }
    else{
 printf("this year is not a leap Year ",a); 
printf("\n");
 

    return 0;
    }     
}