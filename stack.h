//
// Created by Aashman Gupta on 12/19/17.
//

#ifndef MYSTACK_STACK_H
#define MYSTACK_STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack STACK;

extern STACK *newSTACK();                       //Constructor
extern void push(STACK *items, void *value);    //Add value to top
extern void pop(STACK *items);                  //Remove value on top
extern void *peekSTACK(STACK *items);           //Print value on the top
extern int sizeSTACK(STACK *items);             //Print size of stack
extern void printSTACK(STACK *items);           //Print all of stack


#endif
