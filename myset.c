//
// Created by nadav.meidan on 06/01/2020.
//
#include "set.h"
#include "myset.h"




void setsInitiator()
{
    initiate(SETA);
    initiate(SETB);
    initiate(SETC);
    initiate(SETD);
    initiate(SETE);
    initiate(SETF);
}

void initiate(char *set) {
    int i;
    for (i = 0; i < 16; i++)
    {
        set[i] = 0;
    }
}


int main(int numArgs, char* argv[])
{
    setsInitiator();
    int i = 2;
    char valuesList[128];
    printf("Hello,please enter an order and sets\n");

                    if (argv[0] == 'read_set') read_set(argv[1], valuesList);

                    if(argv[0] == 'print_set') print_set(argv[1], valuesList, numArgs);

                    if (numArgs != 3) printf("Error: 3 sets were expected. Enter your new order or stop.");

                    else
                        {

                            if (argv[0] == 'union_set') union_set(argv[1], argv[2], argv[3]);

                            if (argv[0] == 'intersect_set') intersect_set(argv[1], argv[2], argv[3]);

                            if (argv[0] == 'sub_set') sub_set(argv[1], argv[2], argv[3]);

                            if (argv[0] == 'symdiff_set') symdiff_set(argv[1], argv[2], argv[3]);

                        }


            while (i < numArgs) {
                if (argv[i] != NULL) {

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
