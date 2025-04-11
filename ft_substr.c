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
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	str_len;
	unsigned int	i;
	char			*dest;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (NULL);
	if (start + len > str_len)
		len = str_len - start;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
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
