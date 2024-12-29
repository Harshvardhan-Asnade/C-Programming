
#include <stdio.h>
int main()
{

    for (int i = 19 ; i <= 200 ;i++)
    {
        if (i % 19 == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("");
        }
    }

    return 0;
}