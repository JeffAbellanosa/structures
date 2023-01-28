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

    

    return 0;
}