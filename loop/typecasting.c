#include <stdint.h>
int main()
{
    // what is typecasting
    for (int i = 66; i <= 90; i++)
    {
        char ch = (char)i;
        printf("%c ->  " ch);
        printf("%d\n", i);
    }
}