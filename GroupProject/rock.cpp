
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
    return true;
}
