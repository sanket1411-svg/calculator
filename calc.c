#include "calc.h"

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
	return a-b;
}
int multiply(int a, int b)
{
	return a*b;
}
int division(int a, int b)
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