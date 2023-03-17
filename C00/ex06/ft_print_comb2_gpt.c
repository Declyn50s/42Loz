#include <unistd.h>

void ft_print_comb2(void) {
  int i, j;

  for (i = 0; i <= 98; i++) {
    for (j = i + 1; j <= 99; j++) {
      // conversion des entiers en caractères pour l'affichage
      char c1 = i / 10 + '0';
      char c2 = i % 10 + '0';
      char c3 = j / 10 + '0';
      char c4 = j % 10 + '0';

      // écriture des caractères
      write(1, &c1, 1);
      write(1, &c2, 1);
      write(1, " ", 1);
      write(1, &c3, 1);
      write(1, &c4, 1);

      // si ce n'est pas la dernière combinaison, on ajoute une virgule et un espace
      if (i != 98 || j != 99) {
        write(1, ", ", 2);
      }
    }
  }
  // retour à la ligne à la fin de l'affichage
  write(1, "\n", 1);
}
/*
int main(void) {
  ft_print_comb2();
  return 0;
}
*/
/*
La fonction utilise deux boucles pour générer toutes les combinaisons de deux nombres entre 0 et 99. Elle convertit ensuite les entiers en caractères pour les afficher à l'aide de la fonction write. Enfin, elle ajoute une virgule et un espace entre chaque combinaison, sauf pour la dernière.
La fonction write est utilisée ici pour afficher les caractères directement sur la sortie standard (le terminal). Elle prend trois arguments : le descripteur de fichier (1 pour la sortie standard), un pointeur vers le tampon contenant les données à écrire et le nombre d'octets à écrire.
*/
