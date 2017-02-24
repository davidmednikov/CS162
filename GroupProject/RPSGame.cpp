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
	Tool* human;
	Tool* computer;
}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
RPSGame::~RPSGame(){}

/*********************************************************************
 ** Description: Guesses the tool that the computer will use by randomly
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
	int compTool = guess();
	bool validInput = false;
	string userChoice;

	while (!validInput)
	{
		cout << "Pick a tool (r = rock, p = paper, s = scissors): ";
		cin >> userChoice;

		if (userChoice == "r" || userChoice == "R")
		{
			human = new Rock;
			validInput = true;
		}

		else if (userChoice == "p" || userChoice == "P")
		{
			human = new Paper;
		}
		
		else if (userChoice == "s" || userChoice == "S")
		{
			human = new Scissors;
			validInput = true;
		}

		else
		{
			cout << "You did not enter a tool.\n";
			cin.clear();
		}
	}
	

	if (compTool == 0) // computer chose rock
	{
		computer = new Rock;
	}

	else if (compTool == 1) // computer chose paper
	{
		computer = new Paper;
	}

	else // computer chose scissors
	{
		computer = new Scissors;
	}

	// code for the fight goes here

	// update score

	delete human;
	delete computer;

}

/*********************************************************************
 ** Description: Overloaded Assignment (=) Operator
 ** Parameter: Reference to object of type RPSGame
 ** Returns: Reference to object of type RPSGame (*this)
 *********************************************************************/
RPSGame& operator=(const RPSGame& game)
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

	
