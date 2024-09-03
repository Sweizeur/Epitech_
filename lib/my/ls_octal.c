/*
** EPITECH PROJECT, 2023
** Default
** File description:
** ls_octal
*/

static char *zero(char *str, unsigned long long nbr, int *i)
{
    if (nbr == 0) {
        str[*i] = '0';
        *i += 1;
    }
    return (str);
}

char *ls_octal(unsigned int nbr, char *str)
{
    int i = 0;

    zero(str, nbr, &i);
    while (nbr > 0) {
        if (nbr % 8 >= 10) {
            str[i] = 'a' + (nbr % 8) - 10;
        } else {
            str[i] = '0' + (nbr % 8);
        }
        i += 1;
        nbr = nbr / 8;
    }
    str[i] = '\0';
    return (str);
}
