#include <stdio.h>
#include "stack.c"

int main() {
    printf("STARTING TEST...");

    STACK *items = newSTACK();
    push(items, 5);
    push(items, 6);
    push(items, 7);
    printSTACK(items);
    int popped = pop(items);
    printf("%d was removed from the stack.\n", popped);
    push(items, 8);
    printSTACK(items);
    push(items, 9);
    printSTACK(items);
    push(items, 10);
    popped = peekSTACK(items);
    printf("%d is at the top of the stack.\n", popped);
    int size = sizeSTACK(items);
    printf("This stack contains %d numbers.\n", size);
    printSTACK(items);
    popped = pop(items);
    printf("%d was removed from the stack.\n", popped);
    printSTACK(items);


    printf("End of test!");

    return 0;
}
