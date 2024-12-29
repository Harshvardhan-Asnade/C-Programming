// Ques : Print

#include <stdio.h>
int main()
{
    int n;
    printf("which table you want to Print : ");
    scanf("%d", &n);

    for (int i = n; i <= n * 10; i++)
    {
        if (i % n == 0)
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