/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: tool.hpp is the Tool class interface file.
 *********************************************************************/

#ifndef TOOL_HPP
#define TOOL_HPP

// Defines the interface of the Tool class
class Tool
{
protected:
    int strength;
    char type;
public:
    Tool();
    virtual ~Tool();
    virtual bool fight(Tool* tool)=0;
    virtual Tool& operator=(const Tool& tool);
    char getType();
    int getStrength();
    void setStrength(int str);
};

#endif
