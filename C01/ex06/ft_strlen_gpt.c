#include <stdio.h>

int ft_strlen(char *str)
{
    int count = 0; // initialisation du compteur à 0
    while (*str != '\0') // boucle tant qu'on n'a pas atteint la fin de la chaîne
    {
        count++; // incrément du compteur
        str++; // avancement du pointeur de la chaîne
    }
    return count; // retourne le nombre de caractères comptés
}
/*
int main()
{
    char chaine[] = "Bonjour tout le monde !";
    int longueur = ft_strlen(chaine);
    printf("La chaîne \"%s\" contient %d caractères.\n", chaine, longueur);
    return 0;
}
*/
/*
Explication :

La fonction ft_strlen prend en paramètre un pointeur vers une chaîne de caractères (un tableau de caractères).
On initialise un compteur à 0.
On parcourt la chaîne de caractères tant qu'on n'a pas atteint la fin de la chaîne (indiquée par le caractère '\0').
À chaque caractère rencontré, on incrémente le compteur.
Une fois la fin de la chaîne atteinte, on retourne le nombre de caractères comptés.
Dans la fonction main, on déclare une chaîne de caractères chaine, on appelle la fonction ft_strlen avec cette chaîne en paramètre, et on affiche le résultat avec printf.
*/
