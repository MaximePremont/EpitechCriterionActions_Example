/*
** EPITECH PROJECT, 2021
** epitech-criterion-actions
** File description:
** my_strlen.c by Maxime Premont
*/

#include <stddef.h>

/**
* @param str (char* const) Source string
* @return (int) Number of characters
*/
int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    for (; str[i]; i++);
    return i;
}