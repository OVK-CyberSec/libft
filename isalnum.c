int isalnum(int value)
{
    if ( (value > 64 && value < 91) || (value > 96 && value < 123)
            || (value > 47 && value < 58))
            return 1;
    return 0;
}

#include <stdio.h>
void main(void)
{
    char *t = " ";
    int i = 0;
    printf("%d", isalnum(*t));
}