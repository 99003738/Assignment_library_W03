
PROJECT_NAME= Math

object = src/string.c\
src/mathfun.c\
src/bitMask.c

BUILD = build



OBJ = test/test.c\
src/string.c\
src/mathfun.c\
src/bitMask.c

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

CFLAGS= -Iinclude



.PHONY: run clean test doc all

built: $(OBJ) $(BUILD)
	gcc -Iinclude $(OBJ) -o $(PROJECT_NAME).out

libStat:
	make mystring
	make mathfun
	make bitmask
	ar rc Usrstring.a string.o
	ar rc Usrmath.a mathfun.o
	ar rc Usrbitmask.a bitMask.o
	mkdir static_Lib
	cp string.o mathfun.o bitMask.o obj
	rm string.o mathfun.o bitMask.o
	cp Usrbitmask.a Usrmath.a Usrstring.a static_Lib
	rm Usrstring.a Usrmath.a Usrbitmask.a

libdynamic:
	make mystring
	gcc -shared -o str.so string.o

bitmask: src/bitMask.c 
	gcc -Iinclude src/bitMask.c -c 
mystring: src/string.c
	gcc -Iinclude src/string.c -c
mathfun : src/mathfun.c
	gcc -Iinclude src/mathfun.c -c



clean:
	rm -rf $(BUILD)



$(BUILD): 
	mkdir build



#sum.o: sum.c fun.h
#	gcc -c sum.c