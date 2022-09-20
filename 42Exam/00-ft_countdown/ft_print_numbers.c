#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 10;
	while (i > 0)
	{
		i--;
		ft_putchar(i + 48);
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
}
