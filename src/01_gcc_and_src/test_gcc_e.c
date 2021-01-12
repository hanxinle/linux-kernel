#include <stdio.h>

#define LENGTH 1024


int main(void) {
#ifdef TEST
    printf ("TEST Defined!\n ");
#endif

    printf ("Value of LENGTH is %d\n",1024);

    return 0;
}
