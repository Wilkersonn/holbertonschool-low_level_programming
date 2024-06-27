#include "main.h"
/**
 * _puts - Fonction permettant de print un str
 * @s: string print
 * Return: rien
 */
void print_rev(char *s)
    {

        int count;

        count = 0;

        while (*s != '\0')
        /**
         * Permet de traverser le array vers lequel point s
         * "*str" désigne littéralement ce tableau je n'ai pas besoin de
         * de son adresse mémoire avec p = &s ou autre.
         */
            {
            s++;
            count++;
            }

        while (count != 0)
        {
            s--;
            count--;
            _putchar(*s);
        }
        

    _putchar('\n');
    return;
    }