/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:31:25 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/07 18:42:31 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>

int main()
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "abcdefghijklmnopqrstuvwxyz";
	char c[] = "contientPasSeuLementDesLettres[";
	char d[] = "0contientpasSeuLementDeLettres";
	char e[] = "";

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
	printf("%d\n", ft_str_is_alpha(d));
	printf("%d\n", ft_str_is_alpha(e));
	return (0);
}*/
