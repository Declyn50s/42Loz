#include <stdio.h>

void	ft_swap(int	*a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
	
	printf("%d", *a);
	printf("%d", *b);
}

int	main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;

	ft_swap(&a, &b);
	return (0);
}
