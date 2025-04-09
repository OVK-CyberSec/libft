/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:29:43 by mohifdi           #+#    #+#             */
/*   Updated: 2025/02/18 18:13:13 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
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

#include <stdio.h>
#include <string.h>

int main() {
    // Décla principale et de la sous-chaîne à rechercher
    char str[] = "Bienvenue dans le monde de la programmation C!";
    char substr[] = "monde";

    // Utilisation de strstr poaîne principale
    char *result = ft_strstr(str, substr);

    // Vérification du résultat
    if (result != NULL) {
        printf("Sous-chaîne trouvée : \"%s\"\n", result);
        printf("Elle commence à la position : %ld\n", result - str); 
    } else {
        printf("Sous-chaîne non trouvée.\n");
    }
	printf("%s",result);
    // Test avec une sous-chaîne qui n'existe pas
    char substr_not_found[] = "hello";
    result = ft_strstr(str, substr_not_found);

    if (result != NULL) {
        printf("Sous-chaîne trouvée : \"%s\"\n", result);
    } else {
        printf("Sous-chaîne \"%s\" non trouvée.\n", substr_not_found);
    }

    return 0;
}

