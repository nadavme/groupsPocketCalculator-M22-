//
// Created by nadav.meidan on 06/01/2020.
//

#include "set.h"

void read_set(set set,char valuesList[])
{
int i,bit;
long byte;
unsigned char a = 1; // I need to check if the binary representation of this is 00000001

while(valuesList[i] != -1)
{
byte = (strtoul(valuesList[i],,10)+1)/8; // finding the relevant byte
bit = (strtoul(valuesList[i],,10)+)%8;//finding the relevant bit
set[byte] = set[byte]|(a<<bit-1);// I need to check this
i++;
}
}

void print_set(set set)
{

}

void union_set(set a, set b, set c);
{

}

void intersect_set(set a, set b, set c);
{

}

void sub_set(set a, set b, set c);
{

}

void symdiff_set(set a, set b, set c)
{

}

void stop()
{

}