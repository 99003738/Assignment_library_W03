
PROJECT_NAME= String

BUILD = build

OBJ = test.o string.o 

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

CFLAGS= -Iinclude

build: $(OBJ) $(BUID)
	gcc -Iinclude $(OBJ) -o $(PROJECT_OUTPUT).out


run: 

clean:
	rm *.o *.out

$(build): 
	mkdir build

#sum.o: sum.c fun.h
#	gcc -c sum.c