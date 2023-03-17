/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbotuna <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:51:58 by dbotuna           #+#    #+#             */
/*   Updated: 2022/09/05 21:21:26 by dbotuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 2);
	}
	else
	{
		write(1, "P\n", 2);
	}
}

void	ft_is_negative(int n);
/*
int	main(void)
{
	ft_is_negative(0);
}*/

/*
Explications :
La fonction ft_is_negative() prend un entier en paramètre et utilise une instruction if pour vérifier si cet entier est négatif.
Si l'entier est négatif, la fonction write() est utilisée pour écrire le caractère 'N' sur la sortie standard (stdout) pour indiquer un nombre négatif.
Sinon, la fonction write() est utilisée pour écrire le caractère 'P' sur la sortie standard (stdout) pour indiquer un nombre positif ou nul.
À la fin de la fonction, la fonction write() est utilisée pour ajouter un caractère de saut de ligne (\n) pour placer le résultat sur une nouvelle ligne.
La fonction main() est incluse pour appeler la fonction ft_is_negative() avec des exemples d'entiers positifs, nuls et négatifs et exécuter le programme.
*/
