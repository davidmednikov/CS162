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
	cout << "Do you want to set";
	cout <<	" different strengths for the tools? \n";
	cout << "1)yes 2)no \n";
	int choice1;
	choice1 = validNumInput();
	while (choice1 != 1 && choice1 != 2) //makes choices explicit
	{
		cout << " Please choose a menu option \n";
		choice1 = validNumInput();
	}

	switch (choice1) 
	{
	case 1: 
		cout << "What will be the strength of the human's rock?";
		this->rockStrH = validNumInput();
		cout << "What will be the strength of the computer's rock?";
		this->rockStrC = validNumInput();

		cout << "What will be the strength of the human's paper?";
		this->paperStrH = validNumInput();
		cout << "What will be the strength of the computer's paper?";
		this->paperStrC = validNumInput();

		cout << "What will be the strength of the human's scissors?";
		this->scissorsStrH = validNumInput();
		cout << "What will be the strength of the computer's scissors?";
		this->scissorsStrC = validNumInput();

		break;
	case 2:
		this->paperStrH = 1;
		this->rockStrH = 1;
		this->scissorsStrH = 1;
		this->paperStrC = 1;
		this->rockStrC = 1;
		this->scissorsStrC = 1;
		break;
	}

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
			human = new Scissors(scissorsStrH);
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
		computer = new Rock(rockStrC);
	}

	else if (compGuess == 1) // computer guesses paper
	{
		computer = new Paper(paperStrC);
	}

	else // computer guesses scissors
	{
		computer = new Scissors(scissorsStrC);
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



/*********************************************************************
 ** Description: input validation for numbers
 ** Parameter: none
 ** Returns: number
 *********************************************************************/

int RPSGame::validNumInput()
{
	int x;
	cin >> x;
	while (x <= 0)
	{

		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a positive integer ";
		cin >> x;
	}
	return x;
}
	
