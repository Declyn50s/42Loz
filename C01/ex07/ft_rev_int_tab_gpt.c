void ft_rev_int_tab(int *tab, int size) {
    if (size < 2) {
        return; // Si le tableau est vide ou contient un seul élément, on ne peut pas inverser l'ordre des éléments.
    }

    int temp = *tab;
    *tab = *(tab + size - 1);
    *(tab + size - 1) = temp;

    ft_rev_int_tab(tab + 1, size - 2);
}

/*
Explications :
La fonction ft_rev_int_tab prend en paramètre un pointeur vers le tableau tab et sa taille size.
Si le tableau est vide ou contient un seul élément, on ne peut pas inverser l'ordre des éléments, donc la fonction se termine immédiatement avec return.
La fonction échange le premier élément avec le dernier élément du tableau en utilisant une variable temporaire temp.
Ensuite, on appelle récursivement la fonction ft_rev_int_tab avec un pointeur décalé d'une position vers la droite (tab + 1) et une taille réduite de deux (size - 2). Cela permet d'inverser l'ordre des éléments restants dans le tableau.
Comme la fonction utilise la récursion pour inverser l'ordre des éléments du tableau, il n'y a pas de boucle for.
Notez que cette implémentation modifie directement le tableau d'entrée, sans créer une copie du tableau. Si vous souhaitez conserver le tableau d'origine, vous devrez le copier avant d'appeler la fonction ft_rev_int_tab.
*/
