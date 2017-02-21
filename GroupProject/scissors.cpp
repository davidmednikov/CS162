/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: Scissors.cpp is the Scissors class implementation file.
 *********************************************************************/
#include "scissors.hpp"

/*********************************************************************
 ** Description: default constructor
 *********************************************************************/
Scissors::Scissors()
{
    strength = 1;
    type = 's';
}

/*********************************************************************
 ** Description: 1 parameter  constructor that sets strength
 ** Parameter: int
 *********************************************************************/
Scissors::Scissors(int str)
{
    strength = str;
    type = 's';
}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
Scissors::~Scissors(){}

/*********************************************************************
 ** Description: Compare Tool Strengths
 ** Parameter: Tool Object Pointer
 ** Returns: bool
 *********************************************************************/
bool Scissors::fight(Tool* tool)
{
    return true;
}
