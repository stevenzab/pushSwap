/*
** EPITECH PROJECT, 2020
** operation
** File description:
** minim
*/

#include "../include/my.h"

void pb(list **la, list **lb, operation_t **operations)
{
    int data = pop(la);
    push(data, lb);
    push_operation("pb", operations);
}

void pa(list **la, list **lb, operation_t **operations)
{
    int data = pop(lb);
    push(data, la);
    push_operation("pa", operations);
}

void sa(list **la, operation_t **operations)
{
    int tmp1 = pop(la);
    int tmp2 = pop(la);

    push(tmp1, la);
    push(tmp2, la);
    push_operation("sa", operations);
}

void swap_lb_to_la(list **la, list **lb, operation_t **operations)
{
    while (*lb != NULL)
        pa(la, lb, operations);
}