
PROJECT_NAME= Math

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

clean:
	rm -rf $(BUILD)



$(BUILD): 
	mkdir build

#sum.o: sum.c fun.h
#	gcc -c sum.c