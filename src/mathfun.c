 #include "myutils.h"


error_t find_factorial(int num, long* result)
{
   // long temp_result = 1;
    if(1 == num)
    {
        return num;
    }
    else if (0 > num)
    {
        return NEGATIVE_NUMBER;
    }
    else if (0 == num)
    {
        return ZERO;
    }
    else
    {
        while ( 1 <= num )
        {
            *result *= num--;
        }
        return SUCCESS;
    }
    
}

int isPrime(int number)
{
    int i = 0,flag=0;
    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            flag = 1;
            return 0;
            break;
        }
    }
    if (number == 1) 
    {
        return 0;
    }
    else {
        if (flag == 0)
           return 1;
        else
           return 0;
    }
}

