/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:30:04 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 18:31:18 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		total_size;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = (char *)malloc(total_size);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		dest[i] = *s2;
		i++;
		s2++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
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
*/
