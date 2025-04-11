/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:05:07 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 17:05:56 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] && len > i)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
int main() {
    const char *haystack = "Bonjour tout le monde";
    const char *needle = "tout";
    size_t len = 5;

    char *result = strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Sous-chaîne trouvée : \"%s\"\n", result);
    } else {
        printf("Sous-chaîne non trouvée.\n");
    }

    return 0;
}
*/
