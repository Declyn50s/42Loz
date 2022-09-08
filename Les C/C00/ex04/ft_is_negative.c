/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:51:58 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/05 21:21:26 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 2);
	}
	else
	{
		write(1, "P\n", 2);
	}
}

void	ft_is_negative(int n);
/*
int	main(void)
{
	ft_is_negative(0);
}*/
