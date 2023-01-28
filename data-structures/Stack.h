#ifndef STACK_HEADER
#define STACK_HEADER
#include "Node.h"

typedef struct Stack Stack;
typedef Stack* Stackptr;

struct Stack{
    int count;
    Nodeptr top;
};

Stackptr createStack();
void push(Stackptr stack, Item item);
Item pop(Stackptr stack);
Item peekStack(Stackptr stack);

#endif