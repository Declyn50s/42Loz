/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:38:10 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/05 20:44:58 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putchar('c');
}*/

/* 
Ce code est en C et il inclut la bibliothèque standard "unistd.h" qui fournit des fonctions pour effectuer des opérations sur les fichiers, les entrées/sorties et le système d'exploitation.
La fonction "ft_putchar" prend un caractère (c) en entrée et l'écrit dans la sortie standard (STDOUT) en utilisant la fonction "write". Cette dernière prend en entrée le descripteur de fichier "1" (qui représente la sortie standard), l'adresse du caractère (c) et la taille de la donnée à écrire qui est égale à 1.
En somme, cette fonction permet d'écrire un caractère sur la sortie standard, ce qui peut être utile pour afficher des messages à l'utilisateur ou pour effectuer un débogage.
*/
