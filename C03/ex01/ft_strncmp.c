/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:18:24 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/07 20:19:13 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0' || i == n)
		return (0);
	else
		return (-s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1, *s2;

	s1 = "ceciestuntest";
	s2 = "aeciest";
	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 1));
	printf("%d\n", strncmp(s1, s2, 0));
}*/
