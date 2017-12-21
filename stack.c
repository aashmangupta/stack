//
// Created by Aashman Gupta on 12/19/17.
//
#include "stack.h"

struct stack{
    void* value;
    int top;
    int capacity;
};

STACK *newSTACK(){
    STACK *items = malloc(1 * sizeof(STACK));
    items->value = NULL;
    items->top = 0;
    items->capacity = 0;
    return items;
}