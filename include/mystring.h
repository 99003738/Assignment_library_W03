#ifndef __MYSTRING_H__
#define __MYUTILS_H_




#define size 200



int mystrlen(char string[size]);
//char *chptr=NULL;

char new_string[size];

int mystrcpy(char *source, char *destination);
char* mystrcat(char* string_1, char* string_2);
int mystrcmp();


#endif
