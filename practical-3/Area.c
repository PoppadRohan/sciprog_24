#include<stdio.h>
#include<math.h>

int main(void) {

   /* Declaring the variables */    
	float a, b, sum;
	int i,N;
   /* Initialising the variables*/	
	a = 0;
	b = M_PI * 60 / (float)180;
        N=12;
   /* writing the main code*/
	for (i = 5; i < 60; i += 5)
	{
		sum += 2 * tan(M_PI * (float)i / 180.0);
	}
	sum += tan(M_PI * 60.0 / (float)180);
	sum *= (b - a) / (2 * (float)N);
   /* Printing the output */	
	printf("The computed value using the trapezoidal rule is %f\n", sum);
	printf("The actual value using logf(2) is %f\n", logf(2));
	printf("The difference is %f\n", fabs(sum - logf(2)));
	return(0);
}

