#include <stdio.h>
#include <stdlib.h>

/* NODE */

typedef int Item;


typedef struct Node Node;
typedef Node* Nodeptr;

struct Node{
	Item item;
	Nodeptr next;
};

Nodeptr createNode(Item item){
	Nodeptr newNode = (Nodeptr)malloc(sizeof(Node));
	newNode->item = item;
	newNode->next = NULL;
	return newNode;
}

/* STACK */

typedef struct Stack Stack;
typedef Stack* Stackptr;

struct Stack{
	int count;
	Nodeptr head;
};



int main(){
	for(int i = 0; i < 5; i ++)
		printf("Hello World");
	return 0;
}
