#include "mystring.h"





int main()
{
    
    char ch1[10] = "what", ch2[10] = "is this", *newstring;
    mystrcat(ch1,ch2,newstring);
    char ch = newstring[0];
    while(ch != '\0')
    {
    printf(" %c", newstring);
    ch = *newstring++;
    }
    return 0;
}