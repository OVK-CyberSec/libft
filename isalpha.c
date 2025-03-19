#include <stdio.h>

int	isalpha(int value)
{
	if ((value > 64 && value < 91) || (value > 96 && value < 123))
		return 1;
	else
		return 0;
	return 0;
}

void	main(void)
{
	printf("%d",isalpha('/'));
}
