#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Step 1: Ask the user for the number of terms (n)
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Step 2: Loop through numbers from 1 to n and calculate the alternating sum
    for (int i = 1; i <= n; i++)
    {
        // Step 3: Check if the number is odd or even
        if (i % 2 != 0)
        {
            // Odd numbers: Add to the sum
            sum = sum + i;
        }
        else
        {
            // Even numbers: Subtract from the sum
            sum = sum - i;
        }
    }

    // Step 4: Print the result of the alternating sum
    printf(" sum is: %d\n", sum);

    return 0;
}
