#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

void    ft_putnbr_fd(int n, int fd)
{
    long int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

