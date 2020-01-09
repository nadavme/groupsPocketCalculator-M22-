//
// Created by nadav.meidan on 06/01/2020.
//
#include "set.h"
#include "myset.h"


void initiate(set set)
{
    int i;
    for (i = 0; i < 16; i++)
    {
        set[i] = 0;
    }
}

int main(int numArgs, char* argv[])
{
    int k = 0;
    int i = 2;
    char valuesList[128];
    printf("Hello,please enter an order and sets\n");
    if (argv[0] == 'read_set')
    {
        while (argv[i]  != -1)
        {
            valuesList[i] = argv[i];
            i++;
        }
        valuesList[i] = -1;
        read_set(argv[0], valuesList);
    }
    else
    {
        if(argv[0] == 'print_set')
        {
            if(argv[1][0] == -1) printf("The set is empty");
            else
            {
                while(k < strlen(argv[0]))
                {
                    printf("%d, ", argv[0][k]);
                    k++;
                }
            }
        } else {
            if (numArgs != 3) printf("Error: 3 sets were expected. Enter your new order or stop.");
            else {
                if (argv[0] == 'union_set') {
                    union_set(argv[1], argv[2], argv[3]);
                }
                if (argv[0] == 'intersect_set') {
                    intersect_set(argv[1], argv[2], argv[3]);
                }
                if (argv[0] == 'sub_set') {
                    sub_set(argv[1], argv[2], argv[3]);
                }
                if (argv[0] == 'symdiff_set') {
                    symdiff_set(argv[1], argv[2], argv[3]);
                }
            }


            while (i < numArgs) {
                if (argv[i] != NULL) {

                }
            }
        }
    }
    while(i < numArgs)
    {
        if(argv[i]!= NULL)
        {

        }
    }
    return 0;
}
