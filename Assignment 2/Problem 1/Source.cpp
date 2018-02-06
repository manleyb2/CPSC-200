//
//	Brian Manley					CPSC 200				
//	manleyb2@ferris.edu				Spring 2018
//	Problem 1						Assignment 2
//	FILE: Source.cpp				1/11/2018
//

//Oath of Originality: I, Brian Manley, pledge that the
//contents of this file are my own independent work and conform to
//all University policies on academic integrity.

#include <iostream>
using namespace std;

int main()
{
	
	float test, i, j;
	for (i = 3; i < 101; i++)			 //Run a loop from 3 to 100
	{
		
		for (j = 2; j < i; j++)			//Run a loop from 2 to i
		{
			test = i / j;				//Divide i by j
			
			if (test == (int)test)		//if test = the integer version of test then not prime
			{
				break;
			}

			if (j + 1 == i)				//if at end of loop number is prime
			{
				cout << i << endl;
			}

		}
		

	}

	return 0;
}