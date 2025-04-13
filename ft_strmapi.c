#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *dest;
    unsigned int i;

    if (!s || !f)
        return NULL;
    dest = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!dest)
        return (NULL);
    i = 0;
    while (s[i])
    {
        dest[i] = f(i, s[i]);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}