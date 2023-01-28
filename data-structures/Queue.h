#ifndef QUEUE_HEADER
#define QUEUE_HEADER
#include "Node.h"

typedef struct Queue Queue;
typedef Queue* Queueptr;

struct Queue{
    int count;
    Nodeptr head;
    Nodeptr tail;
};

Queueptr createQueue();
void enqueue(Queueptr queue, Item item);
Item dequeue(Queueptr queue);
Item peekQueue(Queueptr queue);


#endif