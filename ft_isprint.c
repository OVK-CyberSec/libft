/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:25:44 by mohifdi           #+#    #+#             */
/*   Updated: 2025/04/11 16:27:08 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int value)
{
	if (value >= 0 && value <= 31)
		return (0);
	return (1);
}
