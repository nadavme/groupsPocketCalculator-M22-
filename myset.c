//
// Created by nadav.meidan on 06/01/2020.
//
#include "set.h"
#include "myset.h"



/*!
 *
 */
void setsInitiator()
{
    initiate(SETA);
    initiate(SETB);
    initiate(SETC);
    initiate(SETD);
    initiate(SETE);
    initiate(SETF);
}


/*!
 *
 * @param set
 */
void initiate(char *set) {
    int i;
    for (i = 0; i < 16; i++)
    {
        set[i] = 0;
    }
}



void readLine(char* line, char* valuesList, int i) {
    scanf("%s", line);

    if (line[strlen(line) - 1] == '\n' || line[strlen(line) - 1] == ' ') line[strlen(line) - 1] = COMMA;

    char *token = strtok(line, COMMA);

    while (token != NULL)
    {
        valuesList[i] = token;
        token = strtok(NULL, COMMA);
    }
}

/*!
 *
 * @param numArgs
 * @param argv
 * @return
 */
int main(int numArgs, char* argv[]) {
    setsInitiator();
    int i = 2;
    char* valuesList[128];
    char* line[80];
    printf("Hello,please enter an order and sets\n");

    scanf("%s", line);

    if(line[strlen(line)-1] == '\n' || line[strlen(line)-1] == ' ') line[strlen(line)-1] = ',';
    
    readLine( line, valuesList, i);

    if (argv[0] == 'read_set') read_set(argv[1], valuesList);

    if(argv[0] == 'print_set') print_set(argv[1]);

    if (numArgs != 3) printf("Error: 3 sets were expected. Enter your new order or stop.");

    else
        {

        if (argv[0] == 'union_set') union_set(argv[1], argv[2], argv[3]);

        if (argv[0] == 'intersect_set') intersect_set(argv[1], argv[2], argv[3]);

        if (argv[0] == 'sub_set') sub_set(argv[1], argv[2], argv[3]);

        if (argv[0] == 'symdiff_set') symdiff_set(argv[1], argv[2], argv[3]);

        }
    return 0;
}
