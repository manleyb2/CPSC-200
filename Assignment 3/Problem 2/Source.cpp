/*

Brian Manley					CPSC 200
manleyb2@ferris.edu				Spring 2018
Problem 2						Assignment 3
FILE: Source.cpp				2/11/2018


Oath of Originality: I, Brian Manley, pledge that the
contents of this file are my own independent work and conform to
all University policies on academic integrity.

*/


#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double MySine(double x);
int machine();

void main()
{
	double input, cResult, result;
	cout << "Press ctrl + c to quit at anytime.";
	while (1 == 1)															//run forever
	{
		cout << "Enter a number between -(pi)/2 and (pi)/2: ";				//recieve input
		cin >> input;
		cout << endl;

		if (input <= M_PI_2)												// test if input is within standards
		{																	// if it does run the sin calls and display them
			cResult = MySine(input);
			result = sin(input);
			cout << "Calculated MySin is " << cResult << endl;
			cout << "Calculated sin is   " << result << endl << endl;
		}
			


	}

}

double MySine(double x)
{

	double limit, sum, test;
	test = x;
	sum = x;									
	for (int i = 1;; i++)
	{	
		test = (test*(-1)*x*x) / (2 * i*(2 * i + 1));		//reduced power series to Tn=Tn−1x2(2n+1)2n
		if (test == 0)										//Test will eventually hit a number lower than double will handle, so end for loop
			break;
		sum = sum + test;									//adding the numbers together will find the sin of x
	}

	return sum;
}