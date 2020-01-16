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


//enum StringsOfSets {SETA, SETB, SETC, SETD, SETE, SETF};


//bool inputChecker(char line[120]);

/*!
 * the function takes all commas and replace them bu space.
 * @param line is the input command line.
 */
void commasReplacer(char* line);


/*!
 *
 * @param line
 * @return
 */
char* parseInputLine(char line[]);


/*!
 *
 */
void excuteCommand();


/*!
 *
 * @param parsedLine
 * @return
 */
char* parseCommand(char* parsedLine);


/*!
 *
 * @param command
 */
void  matchCommand(char* command);


/*!
 *
 * @param setName
 * @return
 */
set*  matchSet(char* setName);


/*!
 *
 * @param parsedLine
 * @return
 */
char* parseSet4ReadOrPrint(char* parsedLine);


/*!
 *
 * @param parsedLine
 * @return
 */
set* parseSets4OtherFunctions(char* parsedLine);


/*!
 *
 * @param parsedLine
 * @return
 */
set* matchSets(char parsedLine);

#endif //MAABADA_MMN22_MYSET_H
