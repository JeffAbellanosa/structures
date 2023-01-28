#ifndef LINKEDLIST_HEADER
#define LINKEDLIST_HEADER
#include "Node.h"

typedef struct LinkedList LinkedList;
typedef LinkedList* LinkedListptr;

struct LinkedList{
    int count;
    Nodeptr head;
};

LinkedListptr createLinkedList();
void addToLL(LinkedListptr linkedList, Item item);

Item getHeadLL(LinkedListptr linkedList);
Item getTailLL(LinkedListptr linkedList);
Item getLLIndex(LinkedListptr linkedList, int index);

Item popHeadLL(LinkedListptr linkedList);
Item popTailLL(LinkedListptr linkedList);
Item popLLIndex(LinkedListptr linkedList, int index);

void delHeadLL(LinkedListptr linkedList);
void delTailLL(LinkedListptr linkedList);
void delLLIndex(LinkedListptr linkedList, int index);


#endif