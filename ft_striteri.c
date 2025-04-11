#include <stdlib.h>
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    
    if (!s || !f)
        return ;
    i = 0;
    while (*s)
    {
        f(i, &s[i]);
        i++;
    }
}