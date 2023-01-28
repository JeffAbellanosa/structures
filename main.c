#include <stdio.h>
#include "./data-structures/structures.c"

int main(){
    Stackptr stack = createStack();

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);

    printf("\nStack[%d]:\n", stack->count);

    while(stack->count != 0){
        printf("*%d -> %p*\n", pop(stack), stack->top->next);
    }
        
    
    Queueptr queue = createQueue();

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);

    printf("\nQueue[%d]:\n", queue->count);

    while(queue->count != 0)
        printf("*%d -> %p*\n", dequeue(queue), queue->head->next);


    LinkedListptr ll = createLinkedList();

    addToLL(ll, 0); // 0
    addToLL(ll, 1); // 1 0
    addToLL(ll, 2); // 2 1 0
    addToLL(ll, 3); // 3 2 1 0
    addToLL(ll, 4); // 4 3 2 1 0
    addToLL(ll, 5); // 5 4 3 2 1 0
    addToLL(ll, 6); // 6 5 4 3 2 1 0
    addToLL(ll, 7); // 7 6 5 4 3 2 1 0

    Nodeptr iterator;

    iterator = ll->head;
    printf("\nLL: ");
    while(iterator != NULL){
        printf("[%d] -> ", iterator->item);
        iterator = iterator->next;
    } printf("NULL\n");

    printf("\nPOP Head, Index=4, Tail, Index=4, then Index=0: ");
    printf("[%d]", popHeadLL(ll));
    printf(" [%d]", popLLIndex(ll, 4));
    printf(" [%d]", popTailLL(ll));
    printf(" [%d]", popLLIndex(ll, 4));
    printf(" [%d]\n", popLLIndex(ll, 0));

    iterator = ll->head;
    printf("\nLL: ");
    while(iterator != NULL){
        printf("[%d] -> ", iterator->item);
        iterator = iterator->next;
    } printf("NULL\n");
    
    getchar();
    return 0;
}