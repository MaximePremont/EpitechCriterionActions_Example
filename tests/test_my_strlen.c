/*
** EPITECH PROJECT, 2021
** epitech-criterion-actions
** File description:
** test_my_strlen.c by Maxime Premont
*/

#include <string.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_strlen, simple_test)
{
    char *str = "Hello World !";

    cr_assert_eq(strlen(str), my_strlen(str));
}