/* Ques : Take input percentage of a student and
print the Grade according to marks: */

#include <Stdio.h>

int main()
{
    int a;
    printf("ENTER THE PERCENTAGE = ");
    scanf("%d ", &a);
    if (a > 90)
    {
        printf("A GRADE 'EXCELLENT'");
    }
    else if (a > 90)
    {
        printf("B GRADE 'VERY GOOD' ");
    }
    else if (a > 80)
    {
        printf("C GRADE 'VERY GOOD' ");
    }
    else if (a > 70)
    {
        printf("D GRADE 'GOOD' ");
    }
    else if (a >= 50)
    {
        printf("E GRADE 'AVERAGE' ");
    }
    
return 0;
   }