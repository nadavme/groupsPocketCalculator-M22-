//
// Created by nadav.meidan on 06/01/2020.
//

#include "set.h"
#include "validations.h"


/*!
 * See in header file.
 * @param set
 * @param parseLine
 */
void print_set(set set, char* parseLine)
{
    if (printIsValid(set, parseLine))
    {
        int i,j,cnt = 0;
        for(i = 0; i<16;i++)
        {
            for(j=0;j<8;j++)
            {
                if (cnt == 16)/*going down a line after 16 elements in a set*/
                {
                    printf("\n");
                    cnt = 0;
                }
                if(bitIsOn(set[i],j))
                {
                    printf("%d, ",8*i+j-1);
                    cnt++;
                }
            }
        }
    }
}


/*!
 * See in header file.
 * @param cell
 * @param bit
 * @return
 */
bool bitIsOn(char cell, int bit)
{
    return (cell & (1<<bit)) != 0;
}


/*!
 * See in header file.
 * @param set
 * @param parsedLine
 */
void read_set(set set, char* parsedLine, int ARGS_NUM)
{
    int i = 2;
    while ((i < ARGS_NUM-2)&& (parsedLine[i] != -1))
    {
        get_num(set, (int) parsedLine[i]);
    }
}


/*!
 * See in header file.
 * @param setx
 * @param num
 */
void get_num(set setx, int num) {
    int bit, byte;
    byte = (num+1)/8;
    bit = (num+1)%8;
    setx[byte] = setx[byte]|(1 << bit);
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
 * See in header file.
 * @param a
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
 * See in header file.
 * @param a
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
 * See in header file.
 * @param a
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