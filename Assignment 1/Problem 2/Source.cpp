//
//	Brian Manley					CPSC 200				
//	manleyb2@ferris.edu				Spring 2018
//	Assignment 1					Problem 2
//	FILE: Source.cpp				1/24/2018
//

//Oath of Originality: I, Brian Manley, pledge that the
//contents of this file are my own independent work and conform to
//all University policies on academic integrity.

// Calculating Net pay

#include <iostream>
using namespace std;

void main()
{
	int dependant;
	float overtime, hours, pay, gross, sSTax, fedTax, stateTax, unionDues, health, takehome;

	sSTax = .06;
	fedTax = .14;
	stateTax = .05;
	unionDues = 10;
	health = 35;
	pay = 16.78;

	cout << "How many hour did you work? \n";
	cin >> hours;
	cout << "How many dependants do you have? \n";
	cin >> dependant;
	
	if (hours > 40)
	{
		overtime = hours - 40;
		gross = ((hours - overtime) * pay) + ((overtime * 1.5) * pay);
		sSTax = gross * sSTax;
		fedTax = gross * fedTax;
		stateTax = gross * stateTax;
		takehome = gross - (sSTax + fedTax + stateTax + unionDues);
		
		if (dependant > 2)
		{
			takehome = takehome - health;
			cout << "Gross pay: " << gross << endl;
			cout << "Social Security tax: " << sSTax << endl;
			cout << "Federal taxes: " << fedTax << endl;
			cout << "State taxes: " << stateTax << endl;
			cout << "Union Dues: " << unionDues << endl;
			cout << "Health Deduction: " << health << endl;
			cout << "Net take-home: " << takehome << endl;

			return;
		}

		cout << "Gross pay: " << gross << endl;
		cout << "Social Security tax: " << sSTax << endl;
		cout << "Federal taxes: " << fedTax << endl;
		cout << "State taxes: " << stateTax << endl;
		cout << "Union Dues: " << unionDues << endl;
		cout << "Net take-home: " << takehome << endl;

		return;
	}

	gross = hours * pay;
	sSTax = gross * sSTax;
	fedTax = gross * fedTax;
	stateTax = gross * stateTax;
	takehome = gross - (sSTax + fedTax + stateTax + unionDues);

	if (dependant > 2)
	{
		takehome = takehome - health;
		cout << "Gross pay: " << gross << endl;
		cout << "Social Security tax: " << sSTax << endl;
		cout << "Federal taxes: " << fedTax << endl;
		cout << "State taxes: " << stateTax << endl;
		cout << "Union Dues: " << unionDues << endl;
		cout << "Health Deduction: " << health << endl;
		cout << "Net take-home: " << takehome << endl;

		return;
	}

	cout << "Gross pay: " << gross << endl;
	cout << "Social Security tax: " << sSTax << endl;
	cout << "Federal taxes: " << fedTax << endl;
	cout << "State taxes: " << stateTax << endl;
	cout << "Union Dues: " << unionDues << endl;
	cout << "Net take-home: " << takehome << endl;

	return;

}