#include "mystring.h"

int mystrlen(char *string)
{
    //printf("Enter your string :")
    //chptr = (char *)malloc(size*sizeof(char));
     char ch = string[0];
     int count = 0;
     while(ch != '\0')
     {
         if (ch == ' ')
         {
             count = count+1; 
         }
         ch = *string++;
     }
return (count+1);
}

int mystrcpy(cahr *source, char *destination)
{







    return 0;
}
