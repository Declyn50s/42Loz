/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:48:41 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/15 21:00:55 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	a;
	a = "Derval";
	str = "Derval";
	printf("Il y a %d lettres dans le prenom %c", ft_strlen(str), a);
}
