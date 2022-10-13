/*
** EPITECH PROJECT, 2020
** kid
** File description:
** lar
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "./struct.h"

int my_getnbr(char *str);
void push(int data, struct element **stack);
void push_operation(const char *data, operation_t **operations);
const char *pop_operation(operation_t **stack);
int pop(struct element **stack);
int top(struct element *stack);
void pb(list **la, list **lb, operation_t **operations);
void pa(list **la, list **lb, operation_t **operations);
void sa(list **la, operation_t **operations);
void swap_lb_to_la(list **la, list **lb, operation_t **operations);
void sort_stack(list **la, list **lb, operation_t **operations);
result_t *check_la_sort(list **stack);
void my_putchar(char c);
char *my_revstr(char *str);
int my_putstr(char const *str);
int my_strlen(char const *str);