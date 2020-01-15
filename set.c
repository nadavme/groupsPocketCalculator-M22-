//
// Created by nadav.meidan on 06/01/2020.
//

#include "set.h"


void print_set(set set)
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


bool bitIsOn(char cell, int bit)
{
    return (cell & (1<<bit)) != 0;
}



void get_num(set setx, int num) {
    int bit, byte;
    byte = (num+1)/8;
    bit = (num+1)%8;
    setx[byte] = setx[byte]|(1 << bit);
}
//void read_set(set set,char line[])
//{
//int bit, counter = 0;
//commasReplacer(line);
//char *token;
//token = strtok(line, " ");
//long byte = 0;
//unsigned char a = 1;
//
//while((int) token != -1)
//{
//    strtoul(token, (char **) byte, 10);
//    byte = (byte+1)/8;
//    strtoul(token, (char **) bit, 10);
//    bit = (bit+1)%8;
//    set[byte] = set[byte]|(a<<(bit-1));
//    token = strtok(NULL, " ");
//    }
//}

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