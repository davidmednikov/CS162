/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: RPSGame.cpp is the RPSGame class implementation file.
 *********************************************************************/
#include "RPSGame.hpp"
#include <stdlib.h> // rand() and srand()
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
 ** Description: default constructor
 *********************************************************************/
RPSGame::RPSGame()
{
	human;
	computer;
	human_wins = 0;
	computer_wins = 0;
	ties = 0;
	
	
	cout << "Welcome! \n";
		cout << "Do you want to set"
		cout <<	" different strengths for the tools? \n";
		cout << "1)yes 2)no \n";
		int choice1;
		choice1 = validNumInput();
		while (choice1 <= 0 || choice1 >=3)
		{
			cout << " Please choose a menu option \n";
			choice1 = validNumInput();
		}

		switch (choice1) {

		case 1: {
			cout << "What will be the strength of rock?";
			int rstr;
			rstr = validNumInput();
			Rock masterrock(rstr);

			cout << "What will be the strength of paper?";
			int pstr;
			pstr = validNumInput();
			Paper masterpaper(pstr);

			cout << "What will be the strength of scissors?";
			int sstr;
			sstr = validNumInput();
			Scissors masterscissors(sstr);

		
		}
		case 2:
		{
			Rock masterrock;
			Paper masterpaper;
			Scissors masterscissors;
		}}

}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
RPSGame::~RPSGame()
{
	delete human;
	delete computer;
	human = NULL;
	computer = NULL;
}

/*********************************************************************
 ** Description: Computer guesses human's tool
 ** generating an int between 0 and 2
 ** Parameter: none
 ** Returns: int representing the tool: 0 = rock, 1 = paper, 2 = scissors
 *********************************************************************/
int RPSGame::guess()
{
	return rand() % 3;
}

/*********************************************************************
 ** Description: 
 ** Parameter: 
 ** Returns: 
 *********************************************************************/
void RPSGame::endGame(){}

/*********************************************************************
 ** Description: ask user for tool and have it fight the computer tool
 ** Parameter: none
 ** Returns: none
 *********************************************************************/
void RPSGame::round()
{
	bool validInput = false;
	string userChoice;

	while (!validInput)
	{
		cout << "Pick a tool (r = rock, p = paper, s = scissors): ";
		cin >> userChoice;

		if (userChoice == "r" || userChoice == "R")
		{
			human = materrock;
			validInput = true;
		}

		else if (userChoice == "p" || userChoice == "P")
		{
			human = new masterpaper;
		}
		
		else if (userChoice == "s" || userChoice == "S")
		{
			human = new masterscissors;
			validInput = true;
		}

		else
		{
			cout << "You did not enter a tool.\n";
			cin.clear();
		}
	}
	
	int compGuess = guess(); // guess what human chose

	if (compGuess == 0) // computer guesses rock
	{
		computer = masterpaper;
	}

	else if (compGuess == 1) // computer guesses paper
	{
		computer = masterscissors;
	}

	else // computer guesses scissors
	{
		computer = masterrock;
	}

	// code for the fight goes here

	// update score
	
}

/*********************************************************************
 ** Description: Overloaded Assignment (=) Operator
 ** Parameter: Reference to object of type RPSGame
 ** Returns: Reference to object of type RPSGame (*this)
 *********************************************************************/
RPSGame& RPSGame::operator=(const RPSGame& game)
{
	if(this == &game)
	{
		return *this;
	}
	
	this->human = game.human;
	this->computer = game.computer;
	this->human_wins = game.human_wins;
	this->computer_wins = game.computer_wins;
	this->ties = game.ties;
	
	return *this;
}

	
