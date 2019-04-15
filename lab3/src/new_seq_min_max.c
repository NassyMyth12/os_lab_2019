#include <stdio.h>
#include <unistd.h>

#include "new_seq_min_max.h"

int main(void)
{
    execl("sequential_min_max"," ","10","100",NULL);
    return 0;
}