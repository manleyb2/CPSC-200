/*

	Brian Manley					CPSC 200
	manleyb2@ferris.edu				Spring 2018
	Problem 1						Assignment 3
	FILE: Source.cpp				2/11/2018


Oath of Originality: I, Brian Manley, pledge that the 
contents of this file are my own independent work and conform to
all University policies on academic integrity.

*/


#include <iostream>
using namespace std;

bool isPerfect(int number);
void isPerfectPrint(int number);

void main()
{
	for (int i = 1; i <= 1000; i++)
	{
		bool perfect;

		perfect = isPerfect(i);				//If i is a perfect number "perfect is true

		if (perfect == true)
		{
			isPerfectPrint(i);				//Run same function but with print statements
			cout << "	" << i << endl;		//Print perfect number
		}


	}

}

bool isPerfect(int number)
{
	float test;
	int i, total = 0;

	

	for (i = 1; i < number; i++)		//itertate from 1 to the tested number
	{

		if (number%i == 0)				//test if i is a factor
		{
			total += i;					//add all factors together
		}
	}
		
	if (total == number)				//if total equals the number then return true, otherwise false
		return true;
	else
		return false;
}


void isPerfectPrint(int number)			//Run same as last funtion but since number is already known to be perfect print each factor
{
	float test;
	int i, total = 0;

	

	for (i = 1; i < number; i++)
	{

		if (number%i == 0)
		{
			cout << i << endl;
		}
	}
		
	return;
}
