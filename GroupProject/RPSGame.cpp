/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: RPSGame.cpp is the RPSGame class implementation file.
 *********************************************************************/
#include "RPSGame.hpp"

/*********************************************************************
 ** Description: default constructor
 *********************************************************************/
RPSGame::RPSGame(){}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
RPSGame::~RPSGame(){}

/*********************************************************************
 ** Description: 
 ** Parameter: 
 ** Returns: 
 *********************************************************************/
void RPSGame::guess(){}

/*********************************************************************
 ** Description: 
 ** Parameter: 
 ** Returns: 
 *********************************************************************/
void RPSGame::endGame(){}

/*********************************************************************
 ** Description: 
 ** Parameter: 
 ** Returns: 
 *********************************************************************/
void RPSGame::round(){}

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

	
