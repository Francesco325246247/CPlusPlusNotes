#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
long double PI;
double PI2;

PI = 3.14159265358979323846264338327950288419716939937510;
PI2 = 3.14159265358979323846264338327950288419716939937510;

cout.precision(50); 

cout << "PI = " << PI << endl;
cout << "PI = " << PI2 << endl;
cout << "PI = 3.14159265358979323846264338327950288419716939937510" << endl;
cout << "sizeof(double) = " << sizeof(double) << endl;
cout << "sizeof(long double) = " << sizeof(long double) << endl;
}
