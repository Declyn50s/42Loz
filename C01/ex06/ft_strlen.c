/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:31:16 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/06 17:33:32 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

/*
Ce code est une fonction en langage C appelée "ft_strlen" qui calcule la longueur d'une chaîne de caractères. Voici ce qu'il fait étape par étape :

1. La fonction prend en entrée un pointeur vers une chaîne de caractères (char* str).
2. La variable entière n est initialisée à 0.
3. La boucle while parcourt chaque caractère de la chaîne de caractères jusqu'à ce qu'elle atteigne le caractère nul ('\0'), qui marque la fin de la chaîne. À chaque tour de boucle, la variable n est incrémentée de 1.
4. Une fois la fin de la chaîne atteinte, la fonction retourne la valeur de n, qui représente la longueur de la chaîne (hors le caractère nul de fin).

Par exemple, si la chaîne de caractères passée en entrée est "Hello world", la fonction va parcourir chaque caractère de la chaîne et incrémenter n jusqu'à atteindre la fin de la chaîne (caractère nul), puis elle retournera la valeur 11 correspondant au nombre de caractères dans la chaîne.
*/
