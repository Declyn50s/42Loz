#include <unistd.h>

void ft_print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}

/*
Explications :
La fonction ft_print_alphabet ne prend aucun argument (void) et ne renvoie rien (void).
On initialise une variable letter à la valeur 'a', qui représente la première lettre de l'alphabet en minuscule.
On utilise ensuite une boucle while pour parcourir toutes les lettres de 'a' à 'z'. À chaque tour de boucle, on utilise la fonction write pour afficher la lettre courante sur la sortie standard (1).
Enfin, on incrémente la variable letter pour passer à la lettre suivante.
*/
