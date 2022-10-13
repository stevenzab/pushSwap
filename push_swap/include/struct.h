/*
** EPITECH PROJECT, 2020
** kida
** File description:
** adafa
*/

#include <stdbool.h>

typedef struct element {
    int data;
    struct element *next;
}list;

typedef struct result {
    bool result;
    struct element *next;
}result_t;

typedef struct operation {
    const char *operation;
    struct operation *next;
}operation_t;