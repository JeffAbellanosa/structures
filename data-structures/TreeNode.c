#include <stdlib.h>
#include "TreeNode.h"

TreeNodeptr createTreeNode(Item item){
    TreeNodeptr newNode = (TreeNodeptr)malloc(sizeof(TreeNode));
    newNode->item = item;
    newNode->left = newNode->right = NULL;
    return newNode;
}