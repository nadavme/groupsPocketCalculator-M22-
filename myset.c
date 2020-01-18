//
// Created by nadav on 15/01/2020.
//

#include "myset.h"
#include "set.h"


set SETA, SETB, SETC, SETD, SETE, SETF;




void excuteCommand()
{
    char line[120];
    char lineWithNoCommas[120];
    printf("Hello,please enter a command and sets:\n");
    while (fgets(line, 120, stdin) != NULL)/*Keep going until EOF.*/
    {
        ARGS_NUM = 0;
        printf("%s\n", line);/*Printing the input line as is*/
        strcpy(lineWithNoCommas, commasReplacer(line));/*Reaplace the cammas by spaces*/
        char* pL =parseInputLine(lineWithNoCommas);/*parse the input line to tokens separated by spaces.*/
        matchCommand(parseCommand(pL), pL);/*Extract the command from input.*/
        matchSet(parseSet4ReadOrPrint(pL));/*Match a single set from the input to read_set ot print_set.*/
        if (doubleCommasChecker(line))
        {
            matchSet((char *) parseSets4OtherFunctions(pL));/*Match 3 sets for other commands.*/
        }
    }
    printf("ERROR: EOF was reached but 'stop' command weren't given");
    exit(0);
}


//bool inputChecker(char line[120]);
//{
//    if(!fgets(line, 120, stdin)) return false;
//    else
//        {
//        return true;
//        }
//}

/*!
 *
 * @param line
 */
const char * commasReplacer(char* line)
{
    int i= 0;
    while(line[i] != '\0')
    {
        if (line[i] == ',')
        {
            line[i] = ' ';
        }
        i++;
    }
}
bool doubleCommasChecker(char* line)
{
    char *token;
    token = strtok(line, " \t");
    int i = strlen(token) -1;
    int j;
    int counter=0 , first = 0, commasCounter =0;
    for (j = i; j < strlen(line) -1; j++)
    {
        if(line[j] == 'S') counter++;
        if ((line[i] == 's')&& (counter = 1)) first = i;
        if((line[j] == 'S')&& (counter>2)) break;
    }
    i= first;
    while(i < j)
    {
        if (line[i] ==',') commasCounter++;
        i++;
    }
    if (commasCounter > 2) return true;
    return false;
}


char** parseInputLine(char line[])
{
    char parsedLineLocal[40];
    int i =0;
    char *token;
    token = strtok(line, " \t");
    while(token != NULL)
    {
        strcpy(&parsedLineLocal[i], token);
        ARGS_NUM ++;
        token = strtok(NULL, " \t");
    }
    return parsedLineLocal;
}

void  matchCommand(char* command, char* parsedLine)
{
    if(strcmp(command, "read_set")==0)
    {
        set* set = matchSet(parseSet4ReadOrPrint(parsedLine));
        if (readIsValid(parsedLine))
        {
            read_set(set, parsedLine);
        }
    }

    else if(strcmp(command, "print_set")==0)
    {
        set* set = matchSet(parseSet4ReadOrPrint(parsedLine));
        print_set(set, parsedLine);
    }
    set* sets = parseSets4OtherFunctions(parsedLine);

    if(strcmp(command, "union_set")==0)
    {
        if (isValid(sets)) union_set(sets[0], sets[1], sets[2]);
    }

    else if(strcmp(command, "intersect_set")==0)
    {
        if (isValid(sets)) intersect_set(sets[0], sets[1], sets[2]);
    }

    else if(strcmp(command, "sub_set")==0)
    {
        if (isValid(sets)) sub_set(sets[0], sets[1], sets[2]);
    }

    else if(strcmp(command, "symdiff_set")==0)
    {
        if (isValid(sets)) symdiff_set(sets[0], sets[1], sets[2]);
    }

    else if(strcmp(command, "stop")==0)
    {
            printf("This is the end of the file ot input. The program will now shut down.");
            stop();
    }
    else printf("Undefined command name");

}


set*  matchSet(char* setName)
{

    if(strcmp(setName, "SETA")==0) return &SETA;

    else if(strcmp(setName, "SETB")==0) return &SETB;

    else if(strcmp(setName, "SETC")==0) return &SETC;

    else if(strcmp(setName, "SETD")==0) return &SETD;

    else if(strcmp(setName, "SETE")==0) return &SETE;

    else if(strcmp(setName, "SETF")==0) return &SETF;

    else
        {
        printf("Undefined set member");
        return NULL;
        }
}


//set* matchSets(char* parsedLine)
//{
//    set* sets = parseSets4OtherFunctions(parsedLine);
//    return sets;
//}

char* parseCommand(char* parsedLine)
{
    return &parsedLine[0];
}


char* parseSet4ReadOrPrint(char* parsedLine)
{
    return &parsedLine[1];
}

set* parseSets4OtherFunctions(char *parsedLine)
{
    int i = 1;
    set* sets[3];
    while((parsedLine[i] != NULL) && (i<5))
    {
        strcpy((char *) sets[i - 1], (const char *) matchSet((char *) parsedLine[i]));
        i++;
    }
    return *sets;
}


int main()
{

}