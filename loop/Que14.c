// Ques : Print

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = n; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = -n / 2;
        }
        else
        {
            sum = -n / 2 + n;
        }
    }
    printf("the sum is ; %d ", sum);
    return 0;
}