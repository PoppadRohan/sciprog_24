#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Declaring functions
double approx_atanh1(double z, double precision);
double approx_atanh2(double z, double precision);

int main(void) 
{
    // Declaring and defining variables
    double precision, z;
    int j;
    double atanh_approx1[200], atanh_approx2[200];

    // Taking precision as input
    printf("Enter the precision value: ");
    scanf("%lf", &precision);
    z = -0.9;

    // Calculating values and assigning to arrays
    for (j = 0; j < 181; j++) {
        atanh_approx1[j] = approx_atanh1(z, precision);
        atanh_approx2[j] = approx_atanh2(z, precision);
        z += 0.01;
    }

    z = -0.9;
    // Printing the values
    for (j = 0; j < 181; j++) {
        printf("\nRelative Difference of approx1 and approx2 at %.2lf is: %.10lf", z, fabs(atanh_approx1[j] - atanh_approx2[j]) / atanh_approx2[j]);
        z += 0.01;
    }

    return 0;
}

// Defining the approx_atanh1 function
double approx_atanh1(double z, double precision) {
    double term, sum = 0;
    int k = 0;
    do {
        term = pow(z, 2 * k + 1) / (2 * k + 1);
        sum += term;
        k++;
    } while (fabs(term) >= precision);

    return sum;
}

// Defining the approx_atanh2 function
double approx_atanh2(double z, double precision) {
    double result;
    result = 0.5 * (log(1 + z) - log(1 - z));
    return result;
}

