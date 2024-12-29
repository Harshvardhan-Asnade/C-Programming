#include <stdio.h>
int main()
{
    float x = (2 * 4 / 2 * 8 + 20 - 10) / 2;
    /*

      Priority Operators
      1st -       * / %             right to left 
       2nd        + -
       3rd        =
                                                    */
printf("Priority is %f",x);
    return 0;
}