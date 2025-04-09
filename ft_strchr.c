char    *ft_strchr(char * str, int character)
{
    if (!str)
        return 0;
    while (str++)
    {
        if (character == *str)
            return str;
    }
    return str;
}

#include <stdio.h>
void main(){
    char *nom = "Amine";
    printf("%s", strchr(nom,'i'));
}