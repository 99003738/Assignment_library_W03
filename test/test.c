#include "mystring.h"
#include "myutils.h"
#include "bitmask.h"




int main()
{
    
    /*char ch1[10] = "what", ch2[10] = "is this";
  
    char* ch = (mystrcat(ch1,ch2));
    printf("\nI am working :");
        while( *ch != '\0'){
      printf("%c",*ch);
            *ch++;
        }*/
    int num ;
    num = setbit(10,2);
   printf(" set the bit %d", num);
    num = reset(10,2);
    printf(" set the bit %d", num);
    num = flip(10,2);
    printf(" set the bit %d", num);


    return 0;
}