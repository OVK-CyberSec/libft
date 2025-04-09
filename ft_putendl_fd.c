#include <unistd.h>

void	ft_putendl_fd(char *str, int fd)
{
	write(fd, "\n", 1);
}
