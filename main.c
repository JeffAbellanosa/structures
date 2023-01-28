#include <stdio.h>
#include "./data-structures/structures.c"

int main(){
    Stackptr stack = createStack();

    printf("Thsi ran!");

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);

    while(stack->count != 0)
        printf("*%d*\n", pop(stack));

    
    

    return 0;
}