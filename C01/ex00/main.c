/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:22:39 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/06 15:30:37 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*ptr;

	a = 21;
	ptr = &a;
	printf("Avant (21): %d\n", a);
	ft_ft(ptr);
	printf("Apres (42): %d\n", a);
}
