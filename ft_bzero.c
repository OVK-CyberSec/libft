#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

void bzero(void *s, size_t len)
{
    size_t i;
    unsigned char *s1 = (unsigned char *)s;

    i = 0;
    while (i < ft_strlen(s) - 1)
        s1[i++] = '\0';
}


int main() {
    char buffer[10] = "Bonjour";
    printf("Avant bzero: %s\n", buffer);
    
    bzero(buffer, sizeof(buffer));  // Remplir les 10 premiers octets avec des zéros
    
    printf("Après bzero: '%s'\n", buffer);
    
    return 0;
}
