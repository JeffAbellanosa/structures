#ifndef BINARYTREE_HEADER
#define BINARYTREE_HEADER
#include "TreeNode.h"

typedef struct BinaryTree BinaryTree;
typedef BinaryTree* BinaryTreeptr;

struct BinaryTree{
    int count;
    TreeNodeptr root;
};

#endif