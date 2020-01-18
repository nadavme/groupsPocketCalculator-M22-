//
// Created by nadav.meidan on 06/01/2020.
//
// Created by nadav.meidan on 06/01/2020.
//

#ifndef MAABADA_MMN22_OLDMAIN_H
#define MAABADA_MMN22_OLDMAIN_H



#include <string.h>
#include <stdio.h>
#include "stdlib.h"
//#include "set.h"

//enum StringsOfSets {SETA, SETB, SETC, SETD, SETE, SETF};


/*!
 * The function initiates the sets of size 16 to holds 0 in all cells(and therefor 000000000 bits of all byte
 * @param set is the set to initiate.
 */
void initiate(set set);



/*!
 *  * The function takes all the six sets and initiates them together.
 * @param sets is an array of sets.
 */

void setsInitiator(set sets[]);

/*!
 * the function takes all commas and replace them bu space.
 * @param line is the input command line.
 */
const char * commasReplacer(char* line);


/*!
 * The function reads a command line and parse it to a command, a set/s to work on and values to add to the values list.
 * @param line is the input.
 * @param valuesList will holds the values that were accepted in the input.
 * @param i is
 */
void readLine(char* line, char* valuesList);

#endif //MAABADA_MMN22_OLDMAIN_H