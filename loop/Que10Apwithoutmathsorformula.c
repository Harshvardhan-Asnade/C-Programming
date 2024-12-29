// Ques : Display this AP - 4,7,10,13,16.. upto ‘n’terms.

#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NO: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a;
        a = a + 3;
        printf("%d ", i);
    }

    return 0;
}