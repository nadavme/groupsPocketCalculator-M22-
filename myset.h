//
// Created by nadav.meidan on 06/01/2020.
//

#ifndef MAABADA_MMN22_MYSET_H
#define MAABADA_MMN22_MYSET_H

#define COMMA ','

#include <string.h>
#include <stdio.h>
#include "stdlib.h"

set SETA, SETB, SETC, SETD, SETE, SETF;

/*!
 *
 * @param set
 */
void initiate(set set);


/*!
 *
 */
void setsInitiator();

/*!
 *
 * @param line
 * @param valuesList
 * @param i
 */
void readLine(char* line, char* valuesList, int i);

#endif //MAABADA_MMN22_MYSET_H
