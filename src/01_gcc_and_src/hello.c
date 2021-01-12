#include <stdio.h>
#include "f_sum.h"

//int f_sum(int a,int b);

int main() {
    int var_sum = 0;
    printf ("makefile OK!\n");
    var_sum = f_sum(2,3);
    printf ("Sum is %d\n",var_sum);
    return 0;
}

