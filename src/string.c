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

int mystrcpy(char *source, char *destination)
{
        char src = source[0], des = destination[0];
        int i = 0;
        while(src != '\0')
        {
            destination[i] = source[i];
            i++;
            src = source[i];

        }
    return 0;
}

char* mystrcat(char* string_1, char* string_2)
{
       int count1 =0,count2=0;
       char ch1 = string_1[0], ch2 = string_2[0];
    

       while(ch1 != '\0')
       {
           new_string[count1] = ch1;
           count1++;
           ch1 = string_1[count1];
       }
        count2 = count1;
        new_string[count2] = ' ';
        count2 = count2+1;
        count1 = 1;
        while(ch2 != '\0')
       {
           new_string[count2] = ch2;
           count2++;
           ch2 = string_2[count1];
           count1++;
       }
    return new_string;

}