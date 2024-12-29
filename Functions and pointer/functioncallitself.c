#include <stdio.h>
void hi(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    hi(n - 1);
}
int main()
{
    int n;
    n = 5;
    hi(n);
    return 0;
}