#include <stdio.h>
void India()
{
    printf("Namsate!\n");
}
void French()
{
    printf("Bonjour\n");
}
int main()
{
    printf("Enter the f for french and i for india :");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i')
    {
        India();
    }

    if (ch == 'f')
    {
        French();
    }

    return 0;
}