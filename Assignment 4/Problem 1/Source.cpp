//
//	Brian Manley					CPSC 200				
//	manleyb2@ferris.edu				Spring 2018
//	Problem 1						Assignment 4
//	FILE: Source.cpp				1/11/2018
//

//Oath of Originality: I, Brian Manley, pledge that the
//contents of this file are my own independent work and conform to
//all University policies on academic integrity.


#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

void userInput(float& a, float& b, float& c);
void consoleOutput(float area);
float computeArea(float a, float b, float c);

void main()
{
	float a, b, c, area;
	
	cout << "Press ctrl + c to quit at anytime." << endl;

	while (1 == 1)												//Run forever
	{
		a = 0;													//initialize variables
		b = 0;
		c = 0;
		
		while (a + b + c == 0)									//avoid running user input morethan once
		{
			userInput(a,b,c);
		}
	
		area = computeArea(a, b, c);							//compute area
	
		consoleOutput(area);									//display area
	}

}

void userInput(float& a, float& b, float& c)
{
	

	cout << "please input the first side of the triangle: ";	//Get a
	cin >> a;
	cout << endl;

	cout << "please input the second side of the triangle: ";	//Get b
	cin >> b;
	cout << endl;

	cout << "please input the third side of the triangle: ";	//Get c
	cin >> c;
	cout << endl;

	if (a + b - c == 0)											//Check to see if it is a real triangle
	{
		a = 0;
		b = 0;
		c = 0;
		cout << "Try Again." << endl << endl
		return;
	}
	if (a + c - b == 0)
	{
		a = 0;
		b = 0;
		c = 0;
		cout << "Try Again." << endl << endl;
		return;
	}
	if (c + b - a == 0)
	{
		a = 0;
		b = 0;
		c = 0;
		cout << "Try Again." << endl << endl;
		return;
	}

	return;
}

void consoleOutput(float area)									//Display area
{
	cout << "The area of the trinage is " << area << "." << endl << endl;

}

float computeArea(float a, float b, float c)					//calculate area
{
	float s, p, area;
	
	p = a + b + c;												//get perimeter
	
	s = (a + b + c) / 2;										//get semiperimeter
	
	area = sqrt(fabs(s*(s - a)*(s - b)*(s - c)));				//find area
	
	return area;
}