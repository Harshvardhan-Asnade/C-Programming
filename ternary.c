#include<stdio.h>
int main () {
    int n ;
    printf("ENTER A NUMBERS : ");
    scanf("%d",&n);
    //ternary operator  
    n%2==0 ? printf("Even Number") : printf("Odd Number") ; 
    return 0 ;

}