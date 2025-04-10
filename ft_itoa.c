#include <stdio.h>
#include <stdlib.h>


int	ft_decimal_places(long n)
{
	int i;

    i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int long	n;
	char	*str;
	int	i;

	n = nbr;
	i = ft_decimal_places(n);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}

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