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
int ARGS_NUM = 0;


/*!
 *
 * @param set
 * @return
 */
bool setIsEmpty(set set);

/*!
 *
 * @param parsedLine
 * @param a
 * @return
 */
bool printIsValid(char* parsedLine, set a);

/*!
 *
 * @param line
 * @return
 */
bool isValid(set* sets[]);//this check is for all other functions/

/*!
 *
 * @param parsedLine
 * @return
 */
bool readIsValid(char parsedLine[]);//this check is when the first command of user is read_set.



#endif //MAABADA_MMN22_VALIDATIONS_H
