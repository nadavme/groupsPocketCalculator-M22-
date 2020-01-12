//
// Created by nadav.meidan on 06/01/2020.
//

#ifndef MAABADA_MMN22_SET_H

#include "stdbool.h"
#define MAABADA_MMN22_SET_H

typedef char set[16];

/*!
 *
 * @param set
 * @param valuesList
 */

/*!
 *
 * @param cell
 * @param bit
 * @return
 */
bool bitNumberIsOn(char cell, int bit);


/*!
 *
 * @param a
 */
void print_set(set a);

/*!
 *
 * @param set
 * @param valuesList
 */
void read_set(set set, char valuesList[]);

/*!
 *
 * @param set
 */

/*!
 *
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
