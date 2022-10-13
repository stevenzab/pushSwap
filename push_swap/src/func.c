/*
** EPITECH PROJECT, 2020
** func
** File description:
** pop, push, top
*/

#include "../include/my.h"

void push(int data, struct element **stack)
{
    struct element *Element = (struct element *)malloc(sizeof(struct element));
    Element->data = data;
    Element->next = *stack;
    (*stack) = Element;
}

void push_operation(const char *data, operation_t **operations)
{
    operation_t *Element = (operation_t *)malloc(sizeof(operation_t));
    Element->operation = data;
    Element->next = *operations;
    (*operations) = Element;
}

const char *pop_operation(operation_t **stack)
{
    if (*stack != NULL) {
        const char *data = (*stack)->operation;
        operation_t *tempPtr = *stack;

        *stack = (*stack)->next;
        free(tempPtr);
        return data;
    }
    return "";
}

int pop(struct element **stack)
{
    if (*stack != NULL) {
        int data = (*stack)->data;
        struct element *tempPtr = *stack;

        *stack = (*stack)->next;
        free(tempPtr);
        return data;
    }
    return -1;
}

int top(struct element *stack)
{
    if (stack != NULL)
        return stack->data;
    return -1;
}
