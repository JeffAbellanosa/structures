#ifndef NODE_HEADER
#define NODE_HEADER
/* 
    The following section is my definition of a node .
    The item can be changed into whatever data type or struct.
    However, if replaced by a struct, further codes to initialize
    them may be needed.
*/

typedef int Item;


typedef struct Node Node;
typedef Node* Nodeptr;

struct Node{
	Item item;
	Nodeptr next;
};

Nodeptr createNode(Item item);

#endif