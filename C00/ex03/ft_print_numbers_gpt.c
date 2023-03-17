#include <unistd.h>

void ft_print_numbers(void) {
    char number = '0';
    while (number <= '9') {
        write(1, &number, 1);
        number++;
    }
    write(1, "\n", 1);
}
/*
int main() {
    ft_print_numbers();
    return 0;
}
*/
/*
Explications :
La fonction ft_print_numbers() utilise une boucle while pour afficher les chiffres de 0 à 9 en ordre croissant.
La variable number est initialisée à la valeur '0', puis incrémentée à chaque itération de la boucle jusqu'à atteindre la valeur '9'.
La fonction write() est utilisée pour écrire chaque chiffre sur la sortie standard (stdout) en utilisant un pointeur vers la variable number et en indiquant la taille d'un seul caractère (1 octet).
À la fin de la boucle, la fonction write() est utilisée pour ajouter un caractère de saut de ligne (\n) pour placer tous les chiffres sur une seule ligne.
La fonction main() est incluse pour appeler la fonction ft_print_numbers() et exécuter le programme.
*/
