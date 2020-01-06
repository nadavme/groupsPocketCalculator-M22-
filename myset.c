//
// Created by nadav.meidan on 06/01/2020.
//
#include "set.h"
#include "myset.h"

set SETA, SETB. SETC, SETD, SETE, SETF;

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
    int i = 1;
    char valuesList[128];
    printf("Hello,please enter an order and sets\n");
    if (argv[0] == 'read_set')
    {
        while (argv[i]  != -1)
        {
            valuesList[i] = argv[i];
            i++;
        }
        read_set(argv[0], valuesList);
    }
    else
        if(argv[0] == 'print_set')
        {
            if(argv[1][0] = -1) printf("The set is empty");
            else
            {
                while(k < strlen(argv[0]))
                {
                    printf("%d, ", argv[0][k]);
                    k++;
                }
            }
        } else switch
                case numArgs != 3:
                    {
                        
                    }
                case argv[0] == 'union_set':
                    {

                    }
                case argv[0] == 'intersect_set':
                    {

                    }
                case argv[0} == 'sub_set':
                    {

                    }
                case argv[0] == 'symdiff_set':


        while(i < numArgs)
        {
            if(argv[i]!= NULL)
            {

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
