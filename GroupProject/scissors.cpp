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
	if (tool->getType() == 'r')
	{
		if((strength / 2 ) > tool->getStrength())
		{
			return true;
		}
		
		else
		{
			return false;
		}

	}

	if (tool->getType() == 's')
	{
		
			return false;
		

	}

	if (tool->getType() == 'p')
	{
		if((strength * 2 ) > tool->getStrength())
		{
			return true;
		}
		
		else
		{
			return false;
		}

	}
}


/*********************************************************************
 ** Description: Overloaded Assignment (=) Operator
 ** Parameter: Reference to object of type scissors
 ** Returns: reference to object of type scissors (*this)
 *********************************************************************/
Scissors& Scissors::operator=(const Scissors& scissors)
{
    //test for self-assignment
    if (this == &scissors)
    {
    	return *this;
    }
    //copy data members
    this->strength = scissors.getStrength();
    this->type = scissors.getType();
    
    //return existing object so operator can be chained
    return *this;
}
