/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:34:06 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/19 19:06:14 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 1)
		return (!nb);
	n = 1;
	while (nb)
		n *= nb--;
	return (n);
}

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	i;

	i = 0;
	printf("%d\n", ft_iterative_factorial(-5));
}
