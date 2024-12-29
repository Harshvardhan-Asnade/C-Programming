#include <stdio.h>

int b()
{
    printf(" GAMES");
}
int a()
{
    printf("LOVE");
    b();
}

int main()
{
    printf("I ");
    a() ;
    return 0;
}