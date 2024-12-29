#include <stdio.h>

int main()
{
  // PRINTING
  printf("HELLO HARSH \n");
  printf("WELCOME TO PROGRAMMING\n");
  printf("\n");
  // HOW TO ADD SOMETHING
  printf("ADD\n");

  int x;
  x = 6;
  printf("X=%d", x);
  printf("\n");
  int b;
  printf("B=4+X");
  printf("\n");
  b = 4 + x;
  printf("B=4+X %d", b);
  printf("\n");
  x = x + 5;
  printf("%d", b);
  printf("\n");
  printf("%d", x + b);
  printf("\n");
  int z;
  z = x + b + 79;
  printf("%d", z);
  printf("\n");

  // INT FUNCTION
  int price = 69;
  printf("Avg age of Men is %d", price);
  // FLOAT FUNCTION
  printf("\n");
  float pi = 3.14;
  printf("the value of pi is %f", pi);
  //  CHAR FUNCTION
  printf("\n");
  char star = '@';
  printf("gmail domain is %c", star);
  printf("gmail.com");
  printf("\n");
  // FIND THE VOL OF SPHERE
  int r = 7;
  float v = 4 * 3.1415 * r * r * r / 3;
  printf(" the vol is = %f", v);
  printf("\n ");

  // how to find avg or %

  float physic = 82;
  float maths = 96;
  float chemistry = 71;
  float english = 90;
  float cs = 98;
  float X = (physic + maths + chemistry + english + cs) / 5;
  printf("THE AVG IS %f", X);
  printf("\n ");

  // find the area of circle
  float area1 = 3.1415 * r * r;
  printf(" the area is = %f", area1);
  printf("\n ");

  /*FIND AREA OF USING INPUT
       int a ,AREA;
   printf("Enter lenght of square : ");
   scanf("%d", &a);
   AREA = a * a ;
   printf("area of square is %d",AREA);

  */

  // find si
  float p, r1, t, si;
  p = 100;
  r1 = 50;
  t = 2;
  si = (p * r1 * t) / 100;
  printf("SI IS %f", si);

  /* TWO INPUT PROBLEM

   int a,p;
   printf("Enter Your No: ");
   scanf("%d%d", &a,&p);
   printf("a=%d , p=%d",a,p);
   printf("\n");
  */

  return 0;
}
