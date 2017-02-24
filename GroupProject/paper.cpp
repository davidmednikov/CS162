/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: paper.cpp is the Paper class implementation file.
 *********************************************************************/
#include "paper.hpp"

/*********************************************************************
 ** Description: default constructor
 *********************************************************************/
Paper::Paper()
{
    strength = 1;
    type = 'p';
}

/*********************************************************************
 ** Description: 1 parameter  constructor that sets strength
 ** Parameter: int
 *********************************************************************/
Paper::Paper(int str)
{
    strength = str;
    type = 'p';
}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
Paper::~Paper(){}

/*********************************************************************
 ** Description: Compare Tool Strengths
 ** Parameter: Tool Object Pointer
 ** Returns: bool
 *********************************************************************/
bool Paper::fight(Tool* tool)
{
    {
if (tool.getType == r)
{
	if((strength / 2 ) > tool.getStrength)
	{
		return true;
	}
	
	else
	{
		return false;
	}

}

if (tool.getType == s)
{
	
		return false;
	

}

if (tool.getType == p)
{
	if((strength * 2 ) > tool.getStrength)
	{
		return true;
	}
	
	else
	{
		return false;
	}

}


   
}
}

/*********************************************************************
 ** Description: Overloaded Assignment (=) Operator
 ** Parameter: Reference to object of type Paper
 ** Returns: Reference to object of type Paper (*this)
 *********************************************************************/
Paper& operator=(const Paper& paper
{
    //test for self-assignment
    if (this == &paper)
    {
    	return *this;
    }
    //copy data members
    this->strength = paper.getStrength();
    this->type = paper.getType();
    
    //return existing object so operator can be chained
    return *this;
}
