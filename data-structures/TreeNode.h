#ifndef TREENODE_HEADER
#define TREENODE_HEADER

typedef int Item;

typedef struct TreeNode TreeNode;
typedef TreeNode* TreeNodeptr;

struct TreeNode{
    Item item;
    TreeNodeptr left;
    TreeNodeptr right;
};

TreeNodeptr createTreeNode(Item item);

#endif