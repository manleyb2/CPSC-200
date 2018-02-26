/*

Brian Manley					CPSC 200
manleyb2@ferris.edu				Spring 2018
Problem 1						Assignment 5
FILE: Source.cpp				2/25/2018


Oath of Originality: I, Brian Manley, pledge that the
contents of this file are my own independent work and conform to
all University policies on academic integrity.

*/

#include <iostream>
#include <stdlib.h> 
#include <time.h> 
#include <math.h>

using namespace std;

void main()
{
	const int totalItems = 10000, numberBins = 100;						//Initialize all constants and varibles
	int bin[numberBins];
	double ni, Ni, X, total, itemsLeft;
	X = 0;
	total = 0;
	itemsLeft = totalItems;
	ni = totalItems / numberBins;

	srand(time(NULL));													//Set random seed
		
	for (int k = 0; k < numberBins; k++) bin[k] = 0;					//Initialize all bins to 0

	while (itemsLeft > 0)												//place 1 item in a random bin[0-99] 10,000 times
	{
		int j = rand() % numberBins;
		bin[j]++;
		itemsLeft--;
	}

	/*																	//commented out code to view array
	for (int k = 0; k < numberBins; k++) cout << bin[k] << "  ";
	cout << endl;
	cout << endl;
	*/

	for (int i = 0; i < numberBins; i++)								//get the summation of the Pearson's chi-squared test
	{
		Ni = bin[i];
		X = X + (pow(Ni - ni, 2) / ni);
		total += Ni;
	}

	X = sqrt(X);														//finally square root the summation to get X

	cout << X << "	" << total << endl;									//Display Pearson's chi-squared test answer and the total number of items placed
}