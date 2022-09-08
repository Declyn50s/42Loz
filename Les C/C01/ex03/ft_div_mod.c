/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:04:21 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/08 18:14:27 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int mod;
	int div;
	a = 1018;
	b = 243;
	
	printf("a = %d, b = %d\n", a, b);
	
	ft_div_mod(a, b, &div, &mod);
	
	printf("%d/%d = div (4) %d, mod :  (46) %d\n", a, b, div, mod);
}*/
