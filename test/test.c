#include "mystring.h"





int main()
{
    
    char ch1[10] = "what", ch2[10] = "is this";
    int* newstring;
    mystrcat(ch1,ch2,newstring);
    printf("I am working : \n");
    char ch = *newstring;
    while(ch != '\0')
    {
        printf("%c",ch);
        newstring++;
    }
    
    return 0;
}