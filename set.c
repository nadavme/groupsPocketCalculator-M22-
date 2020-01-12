//
// Created by nadav.meidan on 06/01/2020.
//

#include "set.h"


void print_set(const set set)
{
    int i = 0, j = 0, counter = 0;
    if(set[0] == -1) printf("The set is empty");
    else
    {
        while(i < 16)
        {
            while (j < 8)
            {
                if (counter > 15)
                {
                    printf("\n");
                    counter = 0;
                }
                if (&bitIsOn)
                {
                    printf("%d, ", (8*i)+j-1);
                    counter++;
                }
                j++;
            }i++;
        }
    }
}


bool bitIsOn(char cell, int bit)
{
    return (cell & (1<<bit)) != 0;
}

void read_set(set set,char valuesList[])
{
int i = 0,bit;
long byte = 0;
unsigned char a = 1;

while(valuesList[i] != -1)
{
    strtoul(&valuesList[i], byte,10);
    byte = (byte+1)/8;
    strtoul(&valuesList[i],bit,10);
    bit = (bit+1)%8;
    set[byte] = set[byte]|(a<<bit-1);
    i++;
    }
}

/*!
 * See in header file.
 * @param a
 * @param b
 * @param c
 */
void union_set(set a, set b, set c)
{
    int i;
    for (i = 0;i<16;i++)
    {
        c[i] = a[i]|b[i];
    }
}

/*!
 * See in header file. * @param a
 * @param b
 * @param c
 */
void intersect_set(set a, set b, set c)
{
    int i;
    for (i = 0;i<16;i++)
    {
        c[i] = a[i] & b[i];
    }
}

/*!
 * See in header file. * @param a
 * @param b
 * @param c
 */
void sub_set(set a, set b, set c)
{
    int i;
    for (i = 0;i<16;i++)
    {
        c[i] = a[i]&~b[i];
    }
}


/*!
 * See in header file. * @param a
 * @param b
 * @param c
 */
void symdiff_set(set a, set b, set c)
{
    int i;
    for (i = 0;i<16;i++)
    {
        c[i] = a[i]^b[i];
    }
}


/*!
 * See in header file. */
void stop()
{
    exit(11);
}
