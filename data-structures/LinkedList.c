#include "LinkedList.h"
#include <stdlib.h>

LinkedListptr createLinkedList(){
    LinkedListptr newList = (LinkedListptr)malloc(sizeof(LinkedList));
    newList->count = 0;
    newList->head = NULL;
    return newList;
}

void addToLL(LinkedListptr linkedList, Item item){
    if (linkedList == NULL) return;
    Nodeptr newNode = createNode(item);
    newNode->next = linkedList->head;
    linkedList->head = newNode;
    linkedList->count++;
}

Item getHeadLL(LinkedListptr linkedList){
    Item item;
    if(linkedList == NULL || linkedList->count == 0) return item;
    return linkedList->head->item;
}

Item getTailLL(LinkedListptr linkedList){
    Item item;
    if(linkedList == NULL || linkedList->count == 0) return item;
    Nodeptr iterator = linkedList->head;
    while(iterator->next != NULL)
        iterator = iterator->next;
    return iterator->item;
}

Item getLLIndex(LinkedListptr linkedList, int index){
    Item item;
    if(
        linkedList == NULL ||
        linkedList->count == 0 ||
        linkedList->count < index ||
        index < 0
    ) return item;
    Nodeptr iterator = linkedList->head;
    while(index > 0){
        iterator = iterator->next;
        index--;
    }
    return iterator->item;
}

Item popHeadLL(LinkedListptr linkedList){
    Item item;
    if(linkedList == NULL || linkedList->count == 0) return item;
    Nodeptr tempNode = linkedList->head;
    linkedList->head = tempNode->next;
    item = tempNode->item;
    linkedList->count--;
    free(tempNode);
    return item;
}

Item popTailLL(LinkedListptr linkedList){
    Item item;
    if(linkedList == NULL || linkedList->count == 0) return item;
    Nodeptr iterator = linkedList->head, prev;
    while(iterator->next != NULL){
        prev = iterator;
        iterator = iterator->next;
    }
    prev->next = NULL;
    item = iterator->item;
    linkedList->count--;
    free(iterator);
    return item;
}

Item popLLIndex(LinkedListptr linkedList, int index){
    Item item;
    if(
        linkedList == NULL ||
        linkedList->count == 0 ||
        linkedList->count < index ||
        index < 0
    ) return item;
    if( index == 0) return popHeadLL(linkedList);
    if( index == linkedList->count-1) return popTailLL(linkedList);
    Nodeptr iterator = linkedList->head, prev;
    while(index > 0){
        prev = iterator;
        iterator = iterator->next;
        index--;
    }
    prev->next = iterator->next;
    item = iterator->item;
    linkedList->count--;
    free(iterator);
    return item;
}

void delHeadLL(LinkedListptr linkedList){
    if(linkedList == NULL || linkedList->count == 0) return;
    Nodeptr tempNode = linkedList->head;
    linkedList->head = tempNode->next;
    linkedList->count--;
    free(tempNode);
}

void delTailLL(LinkedListptr linkedList){
    if(linkedList == NULL || linkedList->count == 0) return;
    Nodeptr iterator = linkedList->head, prev;
    while(iterator->next != NULL){
        prev = iterator;
        iterator = iterator->next;
    }
    prev->next = NULL;
    linkedList->count--;
    free(iterator);
}

void delLLIndex(LinkedListptr linkedList, int index){
    if(
        linkedList == NULL ||
        linkedList->count == 0 ||
        linkedList->count < index ||
        index < 0
    ) return;
    if( index == 0) {delHeadLL(linkedList); return;}
    if( index == linkedList->count-1) {delTailLL(linkedList); return;}
    Nodeptr iterator = linkedList->head, prev;
    while(index > 0){
        prev = iterator;
        iterator = iterator->next;
        index--;
    }
    prev->next = iterator->next;
    linkedList->count--;
    free(iterator);
}