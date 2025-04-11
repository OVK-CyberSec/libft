/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:54:20 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 18:54:56 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

void	bzero(void *s, size_t len)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < ft_strlen(s) - 1)
		s1[i++] = '\0';
}

/*
int main() {
    char buffer[10] = "Bonjour";
    printf("Avant bzero: %s\n", buffer);
    
    bzero(buffer, sizeof(buffer));  // Res zéros
    
    printf("Après bzero: '%s'\n", buffer);
    
    return 0;
}
*/
