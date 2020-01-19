myprog: set.o myset.o
	gcc -g -ansi -Wall -pedantic set.o myset.o -o myprog

set.o: set.c set.h
	gcc -c -ansi -Wall -pedantic set.c -o set.o

myset.o: myset.c set.h
	gcc -c -ansi -Wall -pedantic myset.c -o myset.o

validations.o: validations.h set.h
	gcc -c -ansi -Wall -pedantic myset.c -o validations.o
