//****                      
//****                  ROW= COLUMBES
//****
//****
// take n = 4
#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Numbers : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}