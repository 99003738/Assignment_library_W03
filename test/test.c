#include "mystring.h"





int main()
{
    
    char ch1[10] = "what", ch2[10] = "is this";
    int *newstring=NULL;
    mystrcat(ch1,ch2,newstring);
    
    
    return 0;
}