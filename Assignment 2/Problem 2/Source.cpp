//
//	Brian Manley					CPSC 200				
//	manleyb2@ferris.edu				Spring 2018
//	Problem 2						Assignment 2
//	FILE: Source.cpp				1/11/2018
//

//Oath of Originality: I, Brian Manley, pledge that the
//contents of this file are my own independent work and conform to
//all University policies on academic integrity.




#include <iostream>
#include <math.h>
using namespace std;

int machine()
{
	double macheps = 1.0;

	while ((1.0 + macheps) != 1.0)
	{
		macheps = macheps / 2.0;
	}
	
	macheps = macheps * 2.0;

	return macheps;
}


int main()
{
	int n, i;
	double mach, x, c, xnew;
	
	mach = machine();

	n = -1;
	x = -1;
	c = -1;

	while (x != fabs(x))
	{
		cout << "Please enter a positive number for X : ";
		cin >> x;
		continue;
	}
	while (c != fabs(c))
	{
		cout << "Please enter a positive number for C : ";
		cin >> c;
		continue;
	}
	while (n != abs(n))
	{
		cout << "Please enter a positive whole number for N : ";
		cin >> n;
		continue;
	}

	for (i = 0; i < 20; i++)
	{
		xnew = (((n - 1) * x) / n) + (c / (n * (pow(x, n - 1))));
		if (x - xnew <= mach)
		{
			break;
		}
		x = xnew;
	}
	
	cout << "The answer is " << x << "." << endl;
}