/*

Brian Manley					CPSC 200
manleyb2@ferris.edu				Spring 2018
Problem 2						Assignment 4
FILE: Source.cpp				2/18/2018


Oath of Originality: I, Brian Manley, pledge that the
contents of this file are my own independent work and conform to
all University policies on academic integrity.

*/
#include <iostream>
#include <stdlib.h> 
#include <time.h> 
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int computePrizes();
int chooseDoor();
int showLoser(int winner, int choice);
int makeDecision(int winner, int choice, int loser);

void main()
{
	srand(time(NULL));																//Set a random number seed from the current time
	int winner, choice1, loser, choice2, win, lose, changeWin;
	win = 0;																		//Initialize the counters
	lose = 0;
	changeWin = 0;
	for (int i = 1; i <= 10000; i++)												//Run the game 10,000 times
	{
		winner = computePrizes();													//Running each function of the game
		//cout << "winner " << winner << endl;										//The user interface of the game is commented out
		choice1 = chooseDoor();														//
		//cout << "choice1 " << choice1 << endl;									//
		loser = showLoser(winner, choice1);
		//cout << "loser " << loser << endl;
		choice2 = makeDecision(winner, choice1, loser);
		//cout << "choice2 " << choice2 << endl;
		if (choice1 == choice2)														//Intead of announcing a win or not, iterate counters instead
		{
			if (choice2 == winner)
			{
				win++;
				changeWin++;
			}
		}
		if (choice2 == winner)
		{
			win++;
		}
		if (choice2 != winner)
		{
			lose++;
		}
	}
	cout << "In 10,000 games:" << endl;											// announce all final numbers
	cout << win << " wins" << endl;	
	cout << lose << " loses" << endl;
	cout << changeWin << " of those wins was after changing the choice." << endl << endl;

	cout << "The final choice is a 50/50 chance, so it wouldn't matter" << endl;
}

int computePrizes()																//get a random number 1-3
{
	int winner;
	winner = rand() % 3 + 1;
	return winner;
}
int chooseDoor()																//Originally asked the user for a number 1-3
{
	int choice;																	//Now a random number is generated instead
	//cout << "Please choose one door out of three: ";
	//cin >> choice;
	choice = rand() % 3 + 1;
	//cout << endl;
	return choice;
}
int showLoser(int winner, int choice)											//In the interactive version the loser is shown
{
	int math;	
	if (winner == choice)														//If the user picked the winner subtract 1, unless that == 0 then add 1
	{
		math = winner - 1;
		if (math == 0)
		{
			math = math + 2;
		}
		//cout << math << " is a loser." << endl;
		return math;
	}
	if (winner == 1 && choice == 2)												//These pick the loser that isn't the user choice or the winner.
	{
		//cout << "3 is a loser" << endl;
		return 3;
	}
	if (winner == 1 && choice == 3)
	{
		//cout << "2 is a loser" << endl;
		return 2;
	}
	if (winner == 3 && choice == 2)
	{
		//cout << "1 is a loser" << endl;
		return 1;
	}
}
int makeDecision(int winner, int choice, int loser)								//Originally designed to change the users choice or not
{																				//Now that is up to a coin flip
	int change;	
	//cout << "Do you want to change your choice? 1 for yes and 2 for no: ";
	//cin >> change;
	change = rand() % 2 + 1;
	//cout << "Rand Choice " << change << endl;
	if (change == 1)
	{
		choice = 0;
		while (choice != choice && choice != loser && choice != 0)				//Make sure that if change is wanted that it doesn't matter 
		{																		//which number was already picked.
			choice = choice + 1;
		}
		return choice;
	}
	if (change == 2)
	{
		return choice;
	}
}