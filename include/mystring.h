#ifndef __MYSTRING_H__
#define __MYUTILS_H_

#include <stdio.h>
#include <string.h>

#define size 200



int mystrlen(char string[size]);
//char *chptr=NULL;

char newstring[size];

int mystrcpy(char *source, char *destination);
int mystrcat(char *string_1, char *string_2);
int mystrcmp();


#endif