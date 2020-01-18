//
// Created by nadav on 18/01/2020.
//
/*This func is for print_set*/
bool setIsEmpty(set set)
{
    int i;
    for(i = 0;i<16;i++)
    {
        if((set[i]|0)==1)
            return false;
    }
    return true;
}

/*This is the validation for print_set*/
bool printIsValid(char line[],set a)
{
    if(line[2]!=0)
    {
        fprint("Extraneous text after end of command");
        return false;
    }

    if(line[1]==0)
    {
        fprint("No set to print. please enter a set");
        return false;
    }

    if(setIsEmpty(a))
    {
        fprint("The set is empty");
        return false;
    }
}

bool isValid(char line[])//this check is for all other functions/
{
if((line[0]!="union_set")||(line[0]!="intersect_set")||(line[0]!="symdiff_set")||(line[0]!="sub_set")||	(line[0]!="stop")) {fprint("Undefined command line");return false;}
else
{
if((line[1]==0)||(line[2]==0)||(line[3]==0))
{
fprint("Missing parameter");
return false;
}

}
}

bool readIsValid(char line[],int argc)//this check is when the first command of user is read_set.
{
    int i;
    if(line[argc-1]==-1){
        if((line[1] == "SETA")||(line[1] == "SETB")||(line[1] == "SETC")||(line[1] == "SETD")||(line[1] == 		"SETE")||(line[1] == "SETF"))
        {
            for(i = 0;i<argc;i++)
            {

                if((line[i] > 127)||(line[i] < -1))
                {
                    return false;
                    fprint("Invalid set member - value out of range");
                }
                else
                {
                    if((!isdigit(line[i]))||(floor(line[i])!=line[i])))//maybe need to add a library for floor()
                    {return false;
                        fprint("Invalid set member - not an integer");}
                    if(floor(line[i])!=line[i]))

                }
            }
        } else
        {
            return false;
            fprint("Undefined set member");
        }}
    else {return false;fprint("List of set members is not terminated correctly");}

bool doubleCommasChecker()
{   int i = strlen(parsedLine[0]) -1;
    int j;
    int counter=0 , first = 0, commasCounter =0;
    for (j = i; j < strlen(line) -1; j++)
    {
        if(line[j] == 'S') counter++;
        if ((line[i] == 's')&& (counter =1) first = i;
        if((line[j] == 'S')&& (counter>2)) break;
    }
    i= first;
    while(i < j)
    {
            if (line[i] ==',') commasCounter++;
            i++;
    }
    if (commasCounter > 2) return true;
    return false;
}

    bool readIsValid(char line[],int argc)//this check is when the first command of user is read_set.
    {
        int i;
        if(line[argc-1]==-1)
        {
                for(i = 0;i<argc;i++)
                {
                    if((line[i] > 127)||(line[i] < -1))
                    {
                        return false;
                        fprint("Invalid set member - value out of range");
                    }
                    else
                    {
                        if((!isdigit(line[i]))||(floor(line[i])!=line[i]))//maybe need to add a library for floor()
                        {return false;

                        }
//                        if(floor(line[i])!=line[i]))
                    }
                }
        }
        else
            {
                fprint("List of set members is not terminated correctly");
                return false;
            }
    }


