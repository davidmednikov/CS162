/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: RPSGame.hpp is the RPSGame class interface file.
 *********************************************************************/

#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include "tool.hpp"
#include "rock.hpp"
#include "paper.hpp"
#include "scissors.hpp"

// Defines the interface of the RPSGame class
class RPSGame
{
private:
	Tool* human;
	Tool* computer;
	int human_wins;
	int computer_wins;
	int ties;
public:
	RPSGame();
	~RPSGame();
	RPSGame& operator=(const RPSGame& game);
	int guess();
	void endGame();
	void round();
	int validNumInput();
};

#endif
