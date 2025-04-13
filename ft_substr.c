/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:47:04 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 17:52:35 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (start + i < ft_strlen(s) && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int main() {
    char *s = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(s, start, len);
    if (substring) {
        printf("Substring: %s\n", substring);
        free(substring);  // Don't forget to free the allocated memory
    } else {
        printf("Error: Substring could not be created.\n");
    }

    return 0;
}
*/
