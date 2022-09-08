/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:29:58 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/07 20:30:29 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	nb_c[10];
	long	nb_l;
	int		i;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb_l = nb;
		nb_l = -nb_l;
	}
	else
		nb_l = nb;
	i = 0;
	while (nb_l > 0)
	{
		nb_c[i] = nb_l % 10 + '0';
		nb_l /= 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(nb_c[i]);
}
