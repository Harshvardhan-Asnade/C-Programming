//pritnthe factorial of a given no
#include <stdio.h>

int main() {
    int n ;
    printf("Enter your Number :" );
    scanf("%d", &n);
int product =1;
  for (int i = 1; i <=n; i++)
  {
      product =product *i;
  }
  
    printf("Factorial is : %d\n", product);

    return 0;
}