//
// Created by nadav on 15/01/2020.
//

#include "myset.h"
#include "set.h"

set SETA, SETB, SETC, SETD, SETE, SETF;


void excuteCommand()
{
    char line[120];
    void* command;
    printf("Hello,please enter a command and sets:\n");
//    bool isThereInput = inputChecker(line);
    while (fgets(line, 120, stdin) != NULL)
    {
        char parsedLine[40][10];
        printf("%s\n", line);
        commasReplacer(line);
        strcpy(parsedLine, parseInputLine(line));
        char *p = parsedLine;
        matchCommand((char *) parseCommand(p));
        matchSet((char *) parseSet4ReadOrPrint(p));
        matchSet((char *) parseSets4OtherFunctions())

    }
    printf("ERROR: EOF was reached but 'stop' command weren't given");
    exit(0);
    parseSet4ReadOrPrint();
    parseSets();
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
void commasReplacer(char* line)
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


char parseInputLine(char line[]);
{
    int i =0;
    char *token;
    token = strtok(line, " \t");
    while(token != NULL)
    {
        strcpy(parsedLine[i], token);
        token strtok(NULL, " \t");
    }
}

void  matchCommand(char* command)
{
    if(strcmp(command, "read_set")==0) read_set());

    else if(strcmp(command, "print_set")==0) print_set());

    else if(strcmp(command, "union_set")==0) union_set());

    else if(strcmp(command, "intersect_set")==0) intersect_set());

    else if(strcmp(command, "sub_set")==0) sub_set());

    else if(strcmp(command, "symdiff_set")==0) symdiff_set());

    else if(strcmp(command, "stop")==0)
    {
            printf("This is the end of the file ot input. The program will now shut down.");
            stop();
    }

}


set*  matchSet(char* setName)
{

    if(strcmp(setName, "SETA")==0) return &SETA;

    else if(strcmp(setName, "SETB")==0) return &SETB;

    else if(strcmp(setName, "SETC")==0) return &SETC;

    else if(strcmp(setName, "SETD")==0) return &SETD;

    else if(strcmp(setName, "SETE")==0) return &SETE;

    else if(strcmp(setName, "SETF")==0) return &SETF;

    else return NULL;
}


set* matchSets(char parsedLine)
{
    set* sets = parseSets4OtherFunctions(parsedLine);
    return sets;
}

char parseCommand(char* parsedLine)
{
    return parsedLine[0];
}


char parseSet4ReadOrPrint(char* parsedLine)
{
    return parsedLine[1];
}

set* parseSets4OtherFunctions(char *parsedLine)
{
    int i = 1;
    set sets[3];
    while((parsedLine[i] != NULL) && (i<5))
    {
        strcpy(sets[i-1], matchSet(parsedLine[i]));
        i++;
    }
}


int main()
{

}