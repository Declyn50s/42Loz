/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:23:22 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/13 11:23:24 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str);

int		main(void)
{
	char	*str, *str2;

	str = "      ----+---+++2300fesfss65+2";
	str2 = "2300";
	printf("%d\n", ft_atoi(str));
//	printf("%d\n", atoi(str));
}

