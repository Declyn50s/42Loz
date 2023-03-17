#include <unistd.h>

void ft_print_combn_rec(int n, int start, int num)
{
    if (n == 0) // Cas de base : n == 0, on affiche le nombre
    {
        char c = num + '0'; // Conversion du chiffre en caractère
        write(1, &c, 1);
    }
    else // Cas récursif : on ajoute un chiffre à num et on appelle la fonction récursivement
    {
        for (int i = start; i <= 9; i++)
        {
            int new_num = num * 10 + i;
            ft_print_combn_rec(n - 1, i + 1, new_num); // Appel récursif
        }
    }
}

void ft_print_combn(int n)
{
    for (int i = 0; i <= 9; i++) // Boucle sur tous les chiffres de départ
    {
        ft_print_combn_rec(n - 1, i + 1, i); // Appel récursif pour chaque chiffre de départ
    }
}

/*
La fonction ft_print_combn prend en paramètre un entier n et affiche toutes les différentes combinaisons de n chiffres dans l'ordre croissant. Elle utilise une méthode récursive pour construire chaque nombre.
La fonction utilise la fonction write de la bibliothèque unistd.h pour écrire les caractères sur la sortie standard.
La fonction récursive ft_print_combn_rec prend en paramètres :
n : le nombre de chiffres restants à ajouter
start : le chiffre minimum à ajouter (pour éviter les doublons)
num : le nombre partiellement construit jusqu'à présent
La fonction utilise une boucle pour itérer sur tous les chiffres de départ possibles et appelle la fonction récursive pour chaque chiffre de départ.
Cette fonction ne gère pas les cas où n est supérieur à 9, car cela dépasserait les limites d'un entier signé.
*/
