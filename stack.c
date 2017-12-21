//
// Created by Aashman Gupta on 12/19/17.
//
#include "stack.h"
#include <assert.h>

struct stack{
    int topPositionIndex;
    int capacity;
    int *arr;
};

STACK *newSTACK(){
    STACK *items = malloc(1 * sizeof(STACK));
    items->topPositionIndex = -1;
    items->capacity = 1;
    items->arr = malloc(1 * sizeof(int));
    return items;
}

void push(STACK *items, int value) {
    assert(items->capacity > 0);

    if(items->topPositionIndex < items->capacity) {
        items->topPositionIndex++;
        items->arr[items->topPositionIndex] = value;
    }
    else {
        items->arr = realloc(items->arr, 2 * (items->capacity * sizeof(int)));
        items->capacity *= 2;
        items->topPositionIndex++;
        items->arr[items->topPositionIndex] = value;
    }
    return;
}

int pop(STACK *items) {
    assert(items->topPositionIndex >= 0);

    int temp = items->arr[items->topPositionIndex];
    items->topPositionIndex -= 1;
    if(items->topPositionIndex <= (items->capacity * .25)) {
        items->arr = realloc(items->arr, (items->capacity / 2) * sizeof(int));
    }
    return temp;
}

int peekSTACK(STACK *items) {
    assert(items->topPositionIndex >= 0);
    return items->arr[items->topPositionIndex];
}

int sizeSTACK(STACK *items) {
    return items->topPositionIndex + 1;
}

void printSTACK(STACK *items) {
    assert(items->topPositionIndex >= 0);
    printf("\n");
    printf("Printing stack...\n");
    for (int i = items->topPositionIndex; i >= 0; i--) {
        printf("%d\n", items->arr[i]);
    }
    printf("\n");
    return;
}


