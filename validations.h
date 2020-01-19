//
// Created by nadav on 18/01/2020.
//

#ifndef MAABADA_MMN22_VALIDATIONS_H
#define MAABADA_MMN22_VALIDATIONS_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#include "set.h"

/*This is a global variable that helps the program know how many input number are"*/


/*!
 * The function checks if a set is empty.
 * @param set is the set we are working on.
 * @return true if it is, false else.
 */
bool setIsEmpty(set set);

/*!
 * The function checks all the validations on a print_set command line.
 * @param parsedLine is a list of tokens.
 * @param a is the set to work on.
 * @return true if it is valid, false else.
 */
bool printIsValid(char* parsedLine, set a);

/*!
 * The function checks all the validations on a non print_set/ read_set commands line.
 * @param sets is the opernads to the command.
 * @return true if it is valid, false else.
 */
bool isValid(set* sets[]);

/*!
 * The function checks all the validations on a read_set command line.
 * @param parsedLine is a list of tokens.
 * @return true if it is valid, false else.
 */
bool readIsValid(char parsedLine[], int ARGS_NUM);//this check is when the first command of user is read_set.



#endif //MAABADA_MMN22_VALIDATIONS_H
