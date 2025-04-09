
int ft_toupper(int ch)
{
    if (ch > 96 && ch < 123)
        ch -= 32;
    return ch;
}


#include <stdio.h>
#include <ctype.h>
int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, toupper(c));

    c = '9';
    printf("\n%c -> %c", c, toupper(c));
    return 0;
}