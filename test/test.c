#include "mystring.h"





int main()
{
    
    char str[50]= "what is your name",dest[100]={};
    
   
    mystrcpy(str,dest);

printf(" %s",dest);

    

    return 0;
}