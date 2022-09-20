/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:01:17 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/15 22:26:02 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

#include <stdio.h>

int	main(void)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "abcdefghijklmnopqrstuvwxyz";
	char c[] = "contientPasSeuLementDesLettres[";
	char d[] = "0contientpasSeuLementDeLettres";
	char e[] = "";
	char f[] = " ";

	printf("%d 1\n", ft_str_is_alpha(a));
	printf("%d 1\n", ft_str_is_alpha(b));
	printf("%d 0\n", ft_str_is_alpha(c));
	printf("%d 0\n", ft_str_is_alpha(d));
	printf("%d 1\n", ft_str_is_alpha(e));
	printf("%d 1\n", ft_str_is_alpha(f));
	return (0);
}
