//
// Created by nadav.meidan on 06/01/2020.
//

#ifndef MAABADA_MMN22_SET_H

#define MAABADA_MMN22_SET_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/*!
 *  This define the 'set' data structure.
 */
typedef char set[16];




/*!
 * This function checks if the the bit is on.
 * @param cell in the 16 cells array represent the byte.
 * @param bit is the bit in the matching byte.
 * @return True if the bit is on, False otherwise.
 */
bool bitIsOn(char cell, int bit);


/*!
 * This function adds one number at a time to a set.
 * @param set is the set we work on.
 * @param num is the number to add.
 */
void get_num(set set,int num);


/*!
 * The function goes over the set, bit by bit, checks is its on- and if it is, prints it.
 * @param set is the set we print.
 */
void print_set(set set, char* parsedLine);


/*!
 * This function adds the values from inputto a set.
 * @param set is the set we work on.
 * @param parsedLine is the list of tokens.
 */
void read_set(set set, char* parsedLine, int ARGS_NUM);


/*!
 * The function takes two sets and reads into a third set all the numbers, of the two sets.
 * @param a set
 * @param b set
 * @param c set
 */
void union_set(set a, set b, set c);


/*!
 * The function takes two sets and reads into a third set all the numbers combined the two sets.
 * @param a set
 * @param b set
 * @param c set
 */
void intersect_set(set a, set b, set c);


/*!
 * The function takes two sets and reads into a third set all the numbers the gap between the two sets.
 * @param a set
 * @param b set
 * @param c set
 */
void sub_set(set a, set b, set c);


/*!
 * The function takes two sets and reads into a third set all the numbers the symmetrical gap between the two sets.
 * @param a set
 * @param b set
 * @param c set
 */
void symdiff_set(set a, set b, set c);


/*!
 * The function stop the running of the program.
 */
void stop();


#endif //MAABADA_MMN22_SET_H