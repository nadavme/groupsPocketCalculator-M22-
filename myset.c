//
// Created by nadav.meidan on 06/01/2020.
//
#include "set.h"
#include "myset.h"

set SETA, SETB, SETC, SETD, SETE, SETF;



/*!
 * See in header file.
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
 * * See in header file.
 * @param set
 */
void initiate(char *set) {
    int i;
    for (i = 0; i < 16; i++)
    {
        set[i] = 0;
    }
}


/*!
 *  * See in header file.
 * @param line
 * @param valuesList
 * @param i
 */
void readLine(char* line, char* valuesList)
{
    int i = 0;
    commasReplacer(line);
    char *token;
    token = strtok(line, " ");
    while (token != NULL)
    {
        strcpy(token, &valuesList[i]);
        token = strtok(NULL, ", ");
        i++;
    }
}


void commasReplacer(char* line)
{
    int i= 0;
    for (i = 0; i < strlen(line)-1; i++)
    {
        if(strcmp(&line[i], ",")== 0) strcpy(&line[i], " ");
    }
}

/*!
 *
 * @param numArgs
 * @param argv
 * @return
 */
int main(int numArgs, char* argv[])
{
    char valuesList[129][10];
    char line[80];
    setsInitiator();
    int i = 2;
    do {
        printf("Hello,please enter a command and sets:\n");

        /*Expecting an input that end with a 'stop' command.*/
        if (!fgets(line, 80, stdin))
        {
            print_set("ERROR: EOF was reached but 'stop' command weren't given");
            exit(0);
        }/*Get rid of the '/n' at the end of the input.*/
        if(line[strlen(line)-1] == '\n') line[strlen(line)] = '\0';
        printf("%s\n", line);
        printf("shit3");
        readLine(line, *valuesList);
        printf("shit4");
        printf("%s", valuesList[0]);
        if (strcmp(line, "\0") != 0)
//            runCommand((char) &line);
        {
            printf("shit5");

            readLine(line, *valuesList);

            if (strcmp(argv[0], "read_set") == 0) read_set(argv[1], valuesList);

            if(strcmp(argv[0], "print_set")==0) print_set(argv[1]);

            if (strcmp(argv[0], "stop")==0) stop();

            if (numArgs != 3) printf("\nError: 3 sets were expected. Enter your new order or stop.\n");

            else
            {

                if (strcmp(argv[0], "union_set")==0) union_set(argv[1], argv[2], argv[3]);

                if (strcmp(argv[0], "intersect_set")==0) intersect_set(argv[1], argv[2], argv[3]);

                if (strcmp(argv[0], "sub_set")==0) sub_set(argv[1], argv[2], argv[3]);

                if (strcmp(argv[0], "symdiff_set")==0) symdiff_set(argv[1], argv[2], argv[3]);
            }

        }
    }
    while (strcmp(line, "stop") != 0);/*Accept new commands and execute as long as 'stop' wasn't entered.*/


//    while((int) fgets(line, 81, stdin) != EOF )
//    {
//        puts(line);
//
//        fgets(line, 81, stdin);
//
//        if(line[strlen(line)-1] == '\n' || line[strlen(line)-1] == ' ') line[strlen(line)-1] = ',';
//
//        readLine( line, valuesList);
//
//        if (strcmp(argv[0], "read_set") == 0) read_set(argv[1], valuesList);
//
//        if(strcmp(argv[0], "print_set")==0) print_set(argv[1]);
//
//        if (strcmp(argv[0], "stop")==0) stop();
//
//        if (numArgs != 3) printf("Error: 3 sets were expected. Enter your new order or stop.");
//
//        else
//        {
//
//            if (strcmp(argv[0], "union_set")==0) union_set(argv[1], argv[2], argv[3]);
//
//            if (strcmp(argv[0], "intersect_set")==0) intersect_set(argv[1], argv[2], argv[3]);
//
//            if (strcmp(argv[0], "sub_set")==0) sub_set(argv[1], argv[2], argv[3]);
//
//            if (strcmp(argv[0], "symdiff_set")==0) symdiff_set(argv[1], argv[2], argv[3]);
//        }
//
//    }
//    printf("This is the end of the file ot input. The program will now shut down.");
//    stop();

    return 0;
}
