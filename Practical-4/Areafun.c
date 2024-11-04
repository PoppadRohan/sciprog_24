#include<stdio.h>
#include<math.h>
//Defining N as constant so as to use it in defining and declaring the array
#define N 12

//Declaring and defining the array
float tanarr[N+1];

//Declaring the traprule and degtorad functions
float traprule();
float degtorad(float deg);

//Implementing the main function
int main(void) {

	float area;
	int i;
	//Assigning tan(x) values to tanarr and printing the array
	for(i=0;i<=N;i++){
		tanarr[i]=tan(degtorad(i*5));
		printf("tanarr[%d] = %f\n",i,tanarr[i]);
	}
	
	//Calling the traprule function to calculate the area using trapezoidal rule which is approxiamated value 
	area=traprule();

	printf("The trapezoidal result is %f\n",area);
	//Actual result
	//Integral of tan() is ln(2)
	printf("The actual value is %f\n",logf(2));


	return(0);
}

//Implementing the degtorad function
float degtorad(float deg){

	float rad;
	rad=M_PI*deg/(float)180;

	return rad;
}

//Implementing the traprule function
float traprule(){

	int i;
	float a,b,sum;

	sum=0.0;
	a=0;
        b=M_PI*60/(float)180;

	sum+=tanarr[0]+tanarr[N];
	for (i=1;i<12;i+=1) {
                sum+=2*tanarr[i];
        }

	sum*=(b-a)/(2*(float)N);

	return sum;
}
		

