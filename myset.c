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
    printf("problems here")
    if (line[strlen(line) - 1] == '\n' || line[strlen(line) - 1] == ' ') line[strlen(line) - 1] = COMMA;

    char *token = strtok(line, (const char *) COMMA);

    while (token != NULL)
    {
        strcpy(token, &valuesList[i]);
        token = strtok(NULL, (const char *) COMMA);
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
    char valuesList[128];
    char line[80];
    printf("Hello,please enter a command and sets:\n");

    while(fgets(line, 81, stdin))
    {
        puts(line);

        if(line[strlen(line)-1] == '\n' || line[strlen(line)-1] == ' ') line[strlen(line)-1] = ',';

        readLine( line, valuesList, i);

        if (strcmp(argv[0], "read_set") == 0) read_set(argv[1], valuesList);

        if(strcmp(argv[0], "print_set")==0) print_set(argv[1]);

        if (strcmp(argv[0], "stop")==0) stop();

        if (numArgs != 3) printf("Error: 3 sets were expected. Enter your new order or stop.");

        else
        {

            if (strcmp(argv[0], "union_set")==0) union_set(argv[1], argv[2], argv[3]);

            if (strcmp(argv[0], "intersect_set")==0) intersect_set(argv[1], argv[2], argv[3]);

            if (strcmp(argv[0], "sub_set")==0) sub_set(argv[1], argv[2], argv[3]);

            if (strcmp(argv[0], "symdiff_set")==0) symdiff_set(argv[1], argv[2], argv[3]);
        }

    }
    printf("This is the end of the file ot input. The program will now shut down.");
    stop();

    return 0;
}
