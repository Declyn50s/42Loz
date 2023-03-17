#include <unistd.h>

void ft_putstr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}
/*
Cette fonction utilise la fonction write de la bibliothèque standard unistd.h pour afficher chaque caractère de la chaîne de caractères à l'écran.
La fonction parcourt chaque caractère de la chaîne de caractères en utilisant une boucle while, en vérifiant que le caractère n'est pas le caractère de fin de chaîne \0. 
À chaque itération, la fonction utilise write pour écrire le caractère à l'écran.

La fonction est prototypée de la façon suivante :
void ft_putstr(char *str);

Cela indique que la fonction est de type void, c'est-à-dire qu'elle ne renvoie aucune valeur, et qu'elle prend un pointeur sur char en paramètre nommé str, qui pointe vers le premier caractère de la chaîne de caractères à afficher.
*/
