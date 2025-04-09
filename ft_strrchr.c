#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);


char * ft_strrchr( const char * string, int searchedChar )
{
    int i;

    i = ft_strlen(string) - 1;
    while (i >= 0)
    {
        if (string[i] == searchedChar)
            return (string + i);
        i--;
    }
    return (NULL);
}



int main() {
    const char *str = "bonjour tout le monde";
    char *result = ft_strrchr(str, 'o');

    if (result != NULL) {
        printf("Le dernier 'o' se trouve à la position: %ld\n", result - str);
    } else {
        printf("Le caractère n'a pas été trouvé.\n");
    }

    return 0;
}
