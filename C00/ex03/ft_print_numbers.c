/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:48:15 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/05 21:14:06 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(i + 48);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
