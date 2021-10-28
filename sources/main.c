/*
** EPITECH PROJECT, 2021
** epitech-criterion-actions
** File description:
** main.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

/**
* @param argc (int) Number of arguments
* @param argv (char**) Arguments
* @return (int) System result
*/
int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
        printf("%s : %d\n", argv[i], my_strlen(argv[i]));
    return EXIT_SUCCESS;
}