#include <stdio.h>
#include <math.h>

// Declaring the function with pointers as parameters
void fibonacci(long int *num1, long int *num2);

int main(void) {

    // Declaring the variables
    int count, j;
    long int first, second;

    printf("Enter the count value: ");
    // Taking input
    scanf("%d", &count);
    
    // Verifying that count is greater than or equal to 1
    if (count < 1) {
        printf("Please enter a value greater than or equal to 1");
        return 0;
    }

    first = 0;
    second = 1;

    // Calculating and printing Fibonacci series
    for (j = 0; j < count; j++) {
        printf("%ld ", first);
        if (j % 10 == 0) printf("\n");
        fibonacci(&first, &second);
    }

    return 0;
}

// Defining the function
void fibonacci(long int *num1, long int *num2) {
    long int temp_value;
    temp_value = *num2;
    *num2 = *num2 + *num1;
    *num1 = temp_value;

    return;
}

