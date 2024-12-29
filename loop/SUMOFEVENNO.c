// Ques : WAP to print sum of digits of even no  a given number.
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Step 1: Ask for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    

    // Step 3: Loop through all digits
    while (num > 0) {
        digit = num % 10;  // Get the last digit

        if (digit % 2 == 0) {  // Check if the digit is even
            sum = sum + digit;      // Add it to the sum
        }

       num = num / 10;  // Remove the last digit
    }

    // Step 4: Print the result
    printf("Sum of even digits: %d\n", sum);

    return 0;
}
