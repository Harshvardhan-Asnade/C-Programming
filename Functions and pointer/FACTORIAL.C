#include <stdio.h>

// Function to calculate factorial
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Function to calculate nCr
int ncr(int n, int r) {
    if (r > n || r < 0) {
        return 0;  // Return 0 if invalid
    }
    return fact(n) / (fact(r) * fact(n - r));
}

// Function to get input from user
void getInput(int *n, int *r) {
    printf("Enter value for n: ");
    scanf("%d", n);
    printf("Enter value for r: ");
    scanf("%d", r);
}

// Function to display the result
void displayResult(int n, int r, int ans) {
    if (ans > 0) {
        printf("nCr(%d, %d) = %d\n", n, r, ans);
    } else {
        printf("Invalid input! Ensure that n >= r and r >= 0.\n");
    }
}

// Main function
int main() {
    int n, r;
    
    // Get user input
    getInput(&n, &r);
    
    // Calculate nCr
    int ans = ncr(n, r);
    
    // Display the result
    displayResult(n, r, ans);
    
    return 0;
}
