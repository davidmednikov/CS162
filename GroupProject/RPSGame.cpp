/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: RPSGame.cpp is the RPSGame class implementation file.
 *********************************************************************/
#include "RPSGame.hpp"
#include "getInt.h"
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
	cout << "Do you want to set different strengths for the tools?\n";
	cout << "1)yes 2)no \n";
	int choice1 = getInt(1, 2);

	switch (choice1)
	{
		case 1: {
			cout << "\nWhat will be the strength of your rock: ";
			rockStrH = getInt(1);
			
			cout << "\nWhat will be the strength of the computer's rock: ";
			rockStrC = getInt(1);
			
			cout << "\nWhat will be the strength of your paper: ";
			paperStrH = getInt(1);

			cout << "\nWhat will be the strength of the computer's paper: ";
			paperStrC = getInt(1);

			cout << "\nWhat will be the strength of your scissors: ";
			scissorsStrH = getInt(1);

			cout << "\nWhat will be the strength of the computer's scissors: ";
			scissorsStrC = getInt(1);
			break;
		}
		case 2:
		{
			rockStrH = 1;
			paperStrH = 1;
			scissorsStrH = 1;
			rockStrC = 1;
			paperStrC = 1;
			scissorsStrC = 1;
			break;
		}
		default:
			break;
	}
			
}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
RPSGame::~RPSGame()
{
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
			human = new Rock(rockStrH);
			validInput = true;
		}

		else if (userChoice == "p" || userChoice == "P")
		{
			human = new Paper(paperStrH);
			validInput = true;
		}
		
		else if (userChoice == "s" || userChoice == "S")
		{
			human = new Scissors(scissorsStrC);
			validInput = true;
		}

		else
		{
			cout << "You did not enter a tool. Please try again.\n";
			cin.clear();
		}
	}
	
	int compGuess = guess(); // guess what human chose

	if (compGuess == 0) // computer guesses rock
	{
		computer = new Paper(paperStrC);
	}

	else if (compGuess == 1) // computer guesses paper
	{
		computer = new Scissors(scissorsStrC);
	}

	else // computer guesses scissors
	{
		computer = new Rock(rockStrC);
	}

	int result = human->fight(computer);

	if (result == 0) // computer wins
	{
		++computer_wins;
	}
	else if (result == 1) // human wins
	{
		++human_wins;
	}
	else // tie
	{ 
		++ties;
	}

	delete human;
	delete computer;
	
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