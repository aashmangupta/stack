//
// Created by Aashman Gupta on 12/19/17.
//
#include 
struct stack{
    void* value;
    int top;
    int capacity;
};

STACK *newSTACK(){
    STACK *items = malloc((void*) * sizeof(STACK));
    items->value = NULL;
    items->top = 0;
    items->size = 0;
    return items;
}