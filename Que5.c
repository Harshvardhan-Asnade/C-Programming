/*Ques : Take positive integer input and tell if it
is divisible by 5 or 3.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter positive integer ");
    scanf("%d", &n);
    if (n%5==0 || n%3==0)
    {
        printf("the no is divisble by 3 and 5");
    }
    else{
        printf("the no is not divisble by 3 and 5");
    }
    return 0;
}