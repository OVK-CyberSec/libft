#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *dest;
    int total_size;
    int s1_size;
    int s2_size;
    int i;
    int j;

    if (!s1 || !s2)
        return NULL;
    total_size = ft_strlen(s1) + ft_strlen(s2);
    s1_size = ft_strlen(s1);
    s2_size = ft_strlen(s2);
    dest = (char *)malloc(total_size + 1);
    if (!dest)
        return NULL;
    i = 0;
    while (i < s1_size)
    {
        dest[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < s2_size)
    {
        dest[i + j] = s2[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}

int main(void)
{
    char *str1 = "Hello, ";
    char *str2 = "world!";
    char *result;

    result = ft_strjoin(str1, str2);
    if (result)
    {
        printf("Résultat : %s\n", result);
        free(result); // Libérer la mémoire allouée
    }
    else
    {
        printf("Erreur d'allocation ou chaînes NULL.\n");
    }

    return 0;
}