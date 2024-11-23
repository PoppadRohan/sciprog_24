# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int factorial(int x);

int main(void){
    
    int order, i;
    double *terms, e;

    // Fetch the order of polynomial from user:
    printf("Please enter the order you wish to use\n");
    if (scanf("%d", &order) !=1){
        printf("Did not enter a number!");
        return 1;
    }

    // Allocating memory dynamically for the array:
    terms = (double *)malloc(order * sizeof(double));

    // Iterating till order is reached to store each of the term in the series:
    for(i = 0; i < order; i++){
        terms[i] = 1.0 / (double)factorial(i+1);
        printf("%.16f\n", terms[i]);
    }

    // Iterating till order is reached to store the sum of terms:
    e = 0.0;
    for(i = 0; i < order; i++){
        e = e + terms[i];
    }

    // Deallocating the memory used by the array:
    free(terms);

    // Printing the estimated sum and difference:
    printf("e is estimated as %.10f, with difference %e\n", e, e - exp(1.0));

    return 0;
}

// Defining the function to return the factorial of a given number:
int factorial(int x){
    // If the provided number is negative:
    if(x < 0){
        printf("You must enter a positive number\n");
    }
     // If the provided number is zero, the factorial is returned as 1:
    else if (x == 0){
        return 1;
    }
     // If the provided number is positive and is not equal to 0, call function recursively:
    else{
        return(x * factorial(x-1));
    }
}
