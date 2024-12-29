//***************************
//***************************
//***************************
//***************************
// take n = 4
#include <stdio.h>
int main()
{
    int a;
    int n;
    printf("Enter The Numbers N: ");
    scanf("%d", &n);
    printf("Enter The Numbers A : ");
    scanf("%d", &a);

    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <= n + a; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}