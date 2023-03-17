#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    char letter = 'z';
    while (letter >= 'a') {
        write(1, &letter, 1);
        letter--;
    }
    write(1, "\n", 1);
}
/*
int main() {
    ft_print_reverse_alphabet();
    return 0;
}
*/

/*
Explications :
La fonction ft_print_reverse_alphabet() utilise une boucle while pour afficher les lettres de l'alphabet en ordre décroissant, en commençant par la lettre 'z' et en descendant jusqu'à la lettre 'a'.
La variable letter est initialisée à la valeur 'z', puis décrémentée à chaque itération de la boucle jusqu'à atteindre la valeur 'a'.
La fonction write() est utilisée pour écrire chaque lettre sur la sortie standard (stdout) en utilisant un pointeur vers la variable letter et en indiquant la taille d'un seul caractère (1 octet).
À la fin de la boucle, la fonction write() est utilisée pour ajouter un caractère de saut de ligne (\n) pour placer l'ensemble de l'alphabet sur une seule ligne.
La fonction main() est incluse pour appeler la fonction ft_print_reverse_alphabet() et exécuter le programme.
*/
