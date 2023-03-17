void ft_rev_int_tab(int *tab, int size) {
    int *start = tab;  // pointeur vers le début du tableau
    int *end = tab + size - 1;  // pointeur vers la fin du tableau
    int temp;  // variable temporaire pour stocker la valeur en cours d'échange
    
    while (start < end) {
        temp = *start;  // stocke la valeur de début dans temp
        *start = *end;  // échange la valeur de début avec la valeur de fin
        *end = temp;  // échange la valeur de fin avec la valeur de début
        start++;  // avance le pointeur de début vers la droite
        end--;  // recule le pointeur de fin vers la gauche
    }
}
