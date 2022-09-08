/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:12:48 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/08 18:14:50 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
#include <stdio.h>

int	main()
{
	int a;
	int b;
	
	a = 243;
	b = 42;

	printf("a : %d, b : %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("a : %d, b : %d\n", a, b);	
}*/
