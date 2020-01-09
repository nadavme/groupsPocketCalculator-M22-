//
// Created by nadav.meidan on 06/01/2020.
//

#ifndef MAABADA_MMN22_SET_H
#define MAABADA_MMN22_SET_H

typedef char set[16];


void read_set(set set, char valuesList[]);
void print_set(set set);
void union_set(set a, set b, set c);
void intersect_set(set a, set b, set c);
void sub_set(set a, set b, set c);
void symdiff_set(set a, set b, set c);
void stop();


#endif //MAABADA_MMN22_SET_H
