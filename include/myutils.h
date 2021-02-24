#ifndef __MYUTILS_H__
#define __MYUTILS_H_

typedef enum error_t{
    NEGATIVE_NUMBER = -1,
    ZERO,
    SUCCESS
}error_t;

error_t find_factorial(int num, long* result);



int factorial(int* );
int isPrime();
int isPalindrome();
int vSum();

#endif