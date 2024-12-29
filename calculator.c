#include <stdio.h>
int main()
{
  float a, b;
  char op;
  printf("Calculator Operator are ;");
  printf("\n '+' ADDITIONS ;");
  printf("\n '-' SUBTRAITIONS ;");
  printf("\n '*' MULTIPLCAITIONS ;");
  printf("\n '/' DIVSIONS ;");
  printf("SELECT THE OPERATOR ; ");
  scanf("%c",&op);
  printf("\nENTER VAULE OF A ");
  scanf("%f", &a);
  printf("\nENTER VAULE OF B ");
  scanf("%f", &b);
  switch (op)
  {
  case '+':
    printf("%f+%f=%f" , a, b, a + b) ; break;
  case '-':
    printf("%f-%f=%f", a, b, a - b) ;break;
  case '*':
    printf("%f*%f=%f", a, b, a * b); break;
  case '/':
    printf("%f/%f=%f", a, b, a / b); break;
  default:
    printf("Invaid Opertor"); break;
  }

  return 0;
}