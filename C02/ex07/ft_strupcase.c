/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:36:48 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/07 18:36:58 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "Salut les gars Comment WWwww 000 !";
	printf("Avant: %s \n", str1);
	printf("Apres: %s ", ft_strupcase(str1));

	return (0);
}*/
