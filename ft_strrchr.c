/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:25:45 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 17:27:07 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int searchedChar)
{
	size_t	i;

	while (!s)
		return NULL; 
	i = ft_strlen((char*)s);
	while (i > 0)
	{
		if (s[i] == (char)searchedChar)
			break ;
		i--;
	}
	if (s[i] == (char)searchedChar)
		return ((char *)(s + i));
	return (NULL);
}

/*
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
*/