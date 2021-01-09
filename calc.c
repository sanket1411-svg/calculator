#include "calc.h"



int sub(int a, int b)
{
	return a-b;
}
long int multiply(long int a, long int b)
{
	return a*b;
}
double division(double a, double b)
{
	if(b==0)
	{
		printf("error");
	}
	else
	{
		return a/b;
	}
}
long int square(long int a)
{
	return a*a;
}
long int cube(long int a)
{
	return a*a*a;
}

float cube_root(double a)
{
   float i, precision = 0.000001;
   for(i = 1; (i*i*i) <= a; ++i);        
   for(--i; (i*i*i) < a; i += precision);  
   return i;

}
float square_root(double a)
{
	double sqrt = a / 2;
    double temp = 0;
	while(sqrt != temp)
	{
		temp = sqrt;
		sqrt = ( a/temp + temp) / 2;
	}
	return sqrt;
}
