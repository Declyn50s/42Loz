void ft_sort_int_tab(int *tab, int size) {
    if (size <= 1) {
        return;
    }

    int pivot = tab[0];
    int left = 0;
    int right = size - 1;

    while (left < right) {
        while (tab[left] <= pivot && left < size) {
            left++;
        }
        while (tab[right] > pivot && right >= 0) {
            right--;
        }
        if (left < right) {
            int tmp = tab[left];
            tab[left] = tab[right];
            tab[right] = tmp;
        }
    }

    tab[0] = tab[right];
    tab[right] = pivot;

    ft_sort_int_tab(tab, right);
    ft_sort_int_tab(tab + right + 1, size - right - 1);
}

/* Cette implémentation utilise une version modifiée de l'algorithme de tri rapide (quicksort). Le pivot est choisi comme le premier élément du tableau. On divise ensuite le tableau en deux parties : la partie gauche contient tous les éléments plus petits que le pivot, et la partie droite contient tous les éléments plus grands que le pivot. On répète ce processus récursivement pour chaque partie jusqu'à ce que le tableau soit entièrement trié.

L'implémentation utilise des boucles while pour parcourir le tableau et trouver les éléments qui doivent être échangés. Les échanges sont effectués en utilisant une variable temporaire tmp. La fonction utilise également des appels récursifs pour trier les deux parties du tableau séparément.*/
