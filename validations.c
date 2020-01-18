//
// Created by nadav on 18/01/2020.
//

#include "validations.h"
#include "set.h"

bool setIsEmpty(set set)
{
    int i;
    for(i = 0;i<16;i++)
    {
        if((set[i]|0)==1)
            return false;
    }
    return true;
}

/*This is the validation for print_set*/
bool printIsValid(char* parsedLine, set a)
{
    if(parsedLine[2] != 0)
    {
        printf("Extraneous text after end of command");
        return false;
    }

    if(parsedLine[1] == 0)
    {
        printf("No set to print. please enter a set");
        return false;
    }

    if(setIsEmpty(a))
    {
        printf("The set is empty");
        return false;
    }
}

bool isValid(set* sets[])//this check is for all other functions/
{
        if((sets[1] == NULL) || (sets[2] == NULL) || (sets[3] == NULL))
        {
            printf("Missing parameter");
            return false;
        }
}

bool readIsValid(char* parsedLine)//this check is when the first command of user is read_set.
{
    int i;
    if(parsedLine[ARGS_NUM - 1] == -1)
    {
        for(i = 0;i<ARGS_NUM;i++)
        {
            if((parsedLine[i] > 127) || (parsedLine[i] < -1))
            {
                printf("Invalid set member - value out of range");
                return false;
            }
            else
            {
                if((!isdigit(parsedLine[i])) || (floor(parsedLine[i]) != parsedLine[i]))
                {return false;

                }
            }
        }
    }
    else
    {
        printf("List of set members is not terminated correctly");
        return false;
    }
}

