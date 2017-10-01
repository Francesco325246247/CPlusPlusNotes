#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(void)
{
	double PI2=acos(-1.0);
	long double PI=acos(-1.0L);
	
	cout.precision(50); 
	
	cout << "PI = " << PI << endl;
	cout << "PI = " << PI2 << endl;
}

//https://gmplib.org/#WHAT 
//GMP is a free library for arbitrary precision arithmetic, operating on signed integers, rational numbers, and floating-point numbers. 
//There is no practical limit to the precision except the ones implied by the available memory 
//in the machine GMP runs on. GMP has a rich set of functions, and the functions have a regular interface.
