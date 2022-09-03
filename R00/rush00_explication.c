void    ft_putchar(char c);

void    build_x(int x, int y)
{
    int    i;

    i = 0;
    if (x > 1) // pour tout la valeur de x largeur-ligne
    { 
        ft_putchar('o'); // c'est pour le premier x
        while (i < x - 2) // -2 pour mettre - entre les 2 o
        {
            ft_putchar('-');
            i++;  // rajoutera la valeur jusqua i est plus petit que x-2
        }
        ft_putchar('o'); // mettra o a la fin
        ft_putchar('\n');
    }
    else // sinon il affichera uniquement o
    {
        ft_putchar('o');
        ft_putchar('\n');
    }
}

void    build_y(int x, int y)
{
    int    i;
    int    b;

    i = 0; // 
    b = 0; // 
    if (y > 2)
    {
        while (b < y - 2)
        {
            i = 0;
            ft_putchar('|');// il affichera le 1er |
            while (i < x - 2)
             {
                ft_putchar(' ');
                i++;// il affichera des espace tant que i nest pas egale a x - 2
            }
            if (x > 1)
            {
                ft_putchar('|');// il affiche a la fin |
            }
            ft_putchar('\n');// retour a la ligne
            b++; // il recommencera jusqua ce que b est plus petit que y - 2 (b < y -2)
        }
    }
}

void    rush(int x, int y)
{
    int    i;
    int    b;

    i = 0;
    b = 0;
    if (x >= 1 && y >= 1)// x = colonne et y = ligne
    {
        build_x(x, y);// il affiche o---o
        build_y(x, y);// il affiche |   |
        if (y > 1)
        {
            build_x(x, y);// il affiche uniquement une ligne o---o
        }
    }
}
