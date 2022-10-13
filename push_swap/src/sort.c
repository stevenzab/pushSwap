/*
** EPITECH PROJECT, 2020
** sort
** File description:
** ok
*/

#include "../include/my.h"

void sort_stack(list **la, list **lb, operation_t **operations)
{
    pb(la, lb, operations);

    while (*la != NULL) {
        if (*lb == NULL || (*la)->data >= (*lb)->data) {
            pb(la, lb, operations);
            continue;
        }
        while (*lb != NULL && (*la)->data < (*lb)->data) {
            pa(la, lb, operations);
            sa(la, operations);
        }
    }
}

result_t  *check_la_sort(list **stack)
{
    result_t *returnvalue = (result_t *)malloc(sizeof(struct result));
    list *la = *stack;
    list *tmp = NULL;
    int data = pop(&la);

    push(data, &tmp);
    if (la == NULL) {
        la = tmp;
        returnvalue->result = true;
        return returnvalue;
    }
    while (la != NULL) {
        int elem = pop(&la);
        if (data > elem) {
            push(elem, &tmp);
            while (tmp != NULL) {
                data = pop(&tmp);
                push(data, &la);
            }
            stack = &la;
            returnvalue->next = la;
            returnvalue->result = false;
            return returnvalue;
        }
        push(elem, &tmp);
        data = elem;
    }
    returnvalue->result = true;
    return returnvalue;
}