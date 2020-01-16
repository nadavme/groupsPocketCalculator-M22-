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
 *
 * @param set
 * @param num
 */
void get_num(set set,int num);

/*!
 * The function goes over the set, bit by bit, checks is its on- and if it is, prints it.
 * @param set is the set we print.
 */
void print_set(set set);


/*!
 * The function reads a bunch of numbers and reads it to the requested array.
 * @param set is the set to read to.
 * @param valuesList is the array of values to read.
 */
void read_set(set set, char valuesList[]);


/*!
 * The function takes two sets and reads into a third set all the numbers, of the two sets.
 * @param a
 * @param b
 * @param c
 */
void union_set(set a, set b, set c);


/*!
 *
 * @param a
 * @param b
 * @param c
 */
void intersect_set(set a, set b, set c);


/*!
 *
 * @param a
 * @param b
 * @param c
 */
void sub_set(set a, set b, set c);


/*!
 *
 * @param a
 * @param b
 * @param c
 */
void symdiff_set(set a, set b, set c);


/*!
 *
 */
void stop();


#endif //MAABADA_MMN22_SET_H