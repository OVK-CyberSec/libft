/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:03:00 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 17:04:45 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int character)
{
	if (!str)
		return (0);
	while (str++)
	{
		if (character == *str)
			return (str);
	}
	return (str);
}

/*
#include <stdio.h>
void main(){
    char *nom = "Amine";
    printf("%s", strchr(nom,'i'));
}
*/
