#include <stdlib.h>
#include "Node.h"

Nodeptr createNode(Item item){
	Nodeptr newNode = (Nodeptr)malloc(sizeof(Node));
	newNode->item = item;
	newNode->next = NULL;
	return newNode;
}