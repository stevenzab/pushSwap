/*
** EPITECH PROJECT, 2020
** projet
** File description:
** swap
*/

#include "../include/my.h"

list *init_list(list **la, char **av)
{
    list* tmp = NULL;
    int i = 1;

    while (av[i] != NULL) {
        push(my_getnbr(av[i]), la);
        i++;
        while (*la != NULL) {
            int data = pop(la);
            push(data, &tmp);
        }
    }
    return tmp;
}

list *inverse(list *stack)
{
    list* tmp = NULL;

    while (stack != NULL) {
        int data = pop(&stack);
        push(data, &tmp);
    }
    return tmp;
}

operation_t *inverse_operations(operation_t *stack)
{
    operation_t *tmp = NULL;

    while (stack != NULL) {
        const char *data = pop_operation(&stack);
        push_operation(data, &tmp);
    }
    return tmp;
}

void print_operations(operation_t *operations)
{
    while (operations != NULL && operations->next != NULL) {
        my_putstr(pop_operation(&operations));
        my_putchar(' ');
    }
    my_putstr(pop_operation(&operations));
    my_putchar('\n');
}

int main(int argc, char **argv)
{
    list* la = NULL;
    list* lb = NULL;
    operation_t *operations = NULL;
    result_t *value;

    la = init_list(&la, argv);
    if ((value = check_la_sort(&la))->result)
        return 0;

    la = value->next;
    sort_stack(&la, &lb, &operations);
    swap_lb_to_la(&la, &lb, &operations);
    operations = inverse_operations(operations);
    print_operations(operations);
}

