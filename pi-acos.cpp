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
