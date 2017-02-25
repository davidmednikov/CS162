
/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: rock.cpp is the Rock class implementation file.
 *********************************************************************/
#include "rock.hpp"

/*********************************************************************
 ** Description: default constructor
 *********************************************************************/
Rock::Rock()
{
    strength = 1;
    type = 'r';
}

/*********************************************************************
 ** Description: 1 parameter  constructor that sets strength
 ** Parameter: int
 *********************************************************************/
Rock::Rock(int str)
{
    strength = str;
    type = 'r';
}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
Rock::~Rock(){}

/*********************************************************************
 ** Description: Compare Tool Strengths
 ** Parameter: Tool Object Pointer
 ** Returns: bool
 *********************************************************************/
bool Rock::fight(Tool* tool)
{
	if (tool->getType() == 'p')
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

	if (tool->getType() == 'r')
	{
		
			return false;
		

	}

	if (tool->getType == 's')
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
 ** Parameter: Reference to object of type Rock
 ** Returns: Reference to object of type Rock (*this)
 *********************************************************************/
Rock& Rock::operator=(const Rock& rock)
{
    //test for self-assignment
    if (this == &rock)
    {
    	return *this;
    }
    //copy data members
    this->strength = rock.getStrength();
    this->type = rock.getType();
    
    //return existing object so operator can be chained
    return *this;
}

