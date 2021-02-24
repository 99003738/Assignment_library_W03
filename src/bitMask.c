#include "myutils.h"

int setbit(int number, int position)
{
    return ((1 << position) | number);
}


int reset(int number, int position)
{
    return (number &= ~(1 << position));
}


int flip(int number, int position)
{
    return (number ^ (1 << position));
}

