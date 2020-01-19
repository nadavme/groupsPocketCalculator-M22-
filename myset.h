//
// Created by nadav on 15/01/2020.
//

#ifndef MAABADA_MMN22_MYSET_H
#define MAABADA_MMN22_MYSET_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "set.h"
#include <stdbool.h>
#include "validations.h"


/*!
 * This is the function that runs all the program.
 */
void excuteCommand();



/*!
 * the function takes all commas and replace them bu space.
 * @param line is the input command line.
 */
char* commasReplacer(char* line);


/*!
 * The function make sure there is no double commas between two aperands.
 * @param line is the genuine input line.
 * @return true if there is an error of double commas, false else.
 */
bool doubleCommasChecker(char* line);


/*!
 * The function takes the input line after the commas replacement and parse it to a list of tokens.
 * @param line is the input line.
 * @return the parsed line.
 */
char** parseInputLine(char line[]);



/*!
 * The function returns the command of the input line.
 * @param parsedLine is the list of tokens from the input line.
 * @return the command.
 */
char* parseCommand(char* parsedLine);


/*!
 * The function execute the matching command to the string in command.
 * @param command is the command from the input line.
 */
void  matchCommand(char* command, char* parsedLine);


/*!
 * The function match the set to the parallel string.
 * @param setName is the setString.
 * @return the matching set.
 */
set*  matchSet(char* setName);


/*!
 * The function parse the set for the read_set and print_set commands.
 * @param parsedLine is the list of tokens.
 * @return the set string.
 */
char* parseSet4ReadOrPrint(char* parsedLine);


/*!
 * The function parse the sets for all other commands.
 * @param parsedLine is the list of tokens.
 * @return list of three matching sets.
 */
set* parseSets4OtherFunctions(char* parsedLine);


/*!
 *
 * @param parsedLine
 * @return
 */
set* matchSets(char parsedLine);

#endif //MAABADA_MMN22_MYSET_H
