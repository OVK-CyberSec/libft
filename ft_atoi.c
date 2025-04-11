/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:41 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 16:24:29 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	returns;

	i = 0;
	sign = -1;
	returns = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		returns = returns * 10 + (str[i] - '0');
		i++;
	}
	return (returns * sign);
}
/*
#include <stdio.h>
int main() {
    // Test de la fonction ft_atoi avec différents exemples
    char *str1 = "-1234567";
    char *str2 = "+42";
    char *str3 = "   -987";
    char *str4 = " +42abc";
    char *str5 = " +000123";

    printf("%s = %d\n", str1, ft_atoi(str1));  // Attendu : -1234
    printf("%s = %d\n", str1, ft_atoi(str2)); 
    return 0;
}
*/
