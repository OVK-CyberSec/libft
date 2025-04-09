
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}


int main()
{
    int arr[10];

    // Initialisation du tableau avec des zéros
    memset(arr, 0, sizeof(arr)); // On initialise arr à zéro pour éviter les valeurs aléatoires

    // On affecte à chaque octet de arr la valeur ASCII de 'e' (101)
    ft_memset(arr, 'e', sizeof(arr));

    printf("Tableau après ft_memset() : ");
    printf("%s ", arr);

    printf("\n");

    return 0;
}