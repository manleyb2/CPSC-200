//
//	Brian Manley					CPSC 200				
//	manleyb2@ferris.edu				Spring 2018
//	Assignment 1					Problem 1
//	FILE: Source.cpp				1/24/2018
//

//Oath of Originality: I, Brian Manley, pledge that the
//contents of this file are my own independent work and conform to
//all University policies on academic integrity.

// Calculating Reverse intrest

#include <iostream>
using namespace std;

void main()
{
	float needed, interest, time, total;
	

	cout << "How much money do you need? \n";
	cin >> needed;
	cout << "What is the intrest rate? \n";
	cin >> interest;
	cout << "How long will the loan be for in months? \n";
	cin >> time;
	

	total = needed / (1 - ((time / 12) * interest));

	cout << "You need to ask for a loan of " << total << " to recieve " << needed << endl;

	return;
}