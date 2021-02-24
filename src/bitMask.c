#include "myutils.h"

int setbit(int number, int position)
{
    return ((1 << position) | number);
}

