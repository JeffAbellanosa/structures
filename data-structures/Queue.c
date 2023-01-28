#include <stdlib.h>
#include "Queue.h"

Queueptr createQueue(){
    Queueptr newQueue = (Queueptr)malloc(sizeof(Queue));
    newQueue->count = 0;
    newQueue->head = newQueue->tail = 0;
    return newQueue;
}

void enqueue(Queueptr queue, Item item){
    if(queue == NULL) return;
    Nodeptr newNode = createNode(item);
    if(queue->count > 0) queue->tail->next = newNode;
    queue->tail = (queue->count == 0) ? queue->head = newNode: newNode;
    queue->count++;
}

Item dequeue(Queueptr queue){
    Item item;
    if (queue == NULL || queue->count == 0) return item;
    Nodeptr tempNode = queue->head;
    queue->head = tempNode->next;
    item = tempNode->item;
    queue->count--;
    free(tempNode);
    return item;
}

Item peekQueue(Queueptr queue){
    Item item;
    if (queue == NULL || queue->count == 0) return item;
    return queue->head->item;
}