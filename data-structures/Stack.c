#include <stdlib.h>
#include "Stack.h"

Stackptr createStack(){
    Stackptr newStack = (Stackptr)malloc(sizeof(Stack));
    newStack->count = 0;
    newStack->top = NULL;
    return newStack;
}

void push(Stackptr stack, Item item){
    if(stack == NULL) return;
    Nodeptr newNode = createNode(item);
    newNode->next = stack->top;
    stack->top = newNode;
    stack->count++;
}

Item pop(Stackptr stack){
    Item item;
    if( stack == NULL || stack->count == 0) return item;
    Nodeptr tempNode = stack->top;
    item = tempNode->item;
    stack->top = stack->top->next;
    stack->count--;
    free(tempNode);
    return item;
}

Item peekStack(Stackptr stack){
    Item item;
    if(stack == NULL || stack->count == 0) return item;
    return stack->top->item;
}