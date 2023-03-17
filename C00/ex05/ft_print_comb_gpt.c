#include <unistd.h>

void ft_print_comb(void) {
    char a, b, c;
    a = '0';
    while (a <= '7') {
        b = a + 1;
        while (b <= '8') {
            c = b + 1;
            while (c <= '9') {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a != '7' || b != '8' || c != '9') {
                    write(1, ", ", 2);
                }
                c++;
            }
            b++;
        }
        a++;
    }
    write(1, "\n", 1);
}
/*
int main() {
    ft_print_comb();
    return 0;
}
*/
/*
Explications :
La fonction ft_print_comb() utilise trois boucles while imbriquées pour générer toutes les différentes combinaisons de trois chiffres différents dans l'ordre croissant.
Les variables a, b et c sont initialisées à '0', '1' et '2' respectivement pour commencer à générer les combinaisons.
La première boucle while parcourt les chiffres de '0' à '7'. Le deuxième chiffre (b) commence toujours à être supérieur à la valeur de la première boucle (a), donc la deuxième boucle while parcourt les chiffres de a+1 à '8'. La troisième boucle while parcourt les chiffres de b+1 à '9'.
Dans chaque boucle while, les caractères a, b et c sont écrits sur la sortie standard (stdout) en utilisant la fonction write(). Si les chiffres ne sont pas les derniers chiffres possibles ('7', '8' et '9'), alors une virgule et un espace sont également écrits pour séparer les chiffres.
À la fin de la fonction, la fonction write() est utilisée pour ajouter un caractère de saut de ligne (\n) pour placer les résultats sur une nouvelle ligne.
La fonction main() est incluse pour appeler la fonction ft_print_comb() et exécuter le programme.
*/
