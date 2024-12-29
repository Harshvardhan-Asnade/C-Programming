#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Valuve of N :");
    scanf("%d", &n);
    int a = n + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int J = 1; J <= n; J++)
        {
            printf("%d", J);
        }

        printf("\n");
    }

    return 0;
}