
PROJECT_NAME= String

BUILD = build

OBJ = test.o string.o 

CFLAGS= -Iinclude

build: $(OBJ)
	gcc -Iinclude $(OBJ) -o $(PROJECT_NAME).out


run: 

clean:
	rm *.o *.out

build 
	mkdir build

#sum.o: sum.c fun.h
#	gcc -c sum.c