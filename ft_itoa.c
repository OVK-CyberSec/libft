/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:27:28 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 18:50:12 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		n;
	char	*str;
	int		i;

	n = nbr;
	i = 0;
	if (n <= 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		str[--i] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

/*
int	main(void)
{
	int	n = -987564;
	int	i = 0;
	char	*str = ft_itoa(n);

	while (str[i])
	{	
		printf("str[%d] = [%c]\n", i, str[i]);
		i++;
	}
}
*/
