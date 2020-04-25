// This code is intended for people wishing to understand the Structure
// of the Binary Tree. This createBinaryTree() function is merely didactic.

#include <stdio.h>
#include <stdlib.h>

typedef double type;

typedef struct binaryTree {
	type value;
	struct binaryTree * left, * right;
} binTree;

binTree * createBinaryTree (binTree * tree, type value) {
	if (tree == NULL) {
		binTree * newTree = (binTree *) malloc (sizeof (binTree));
		
		newTree -> value = value;
		newTree -> right = NULL;
		newTree -> left = NULL;
		
		return newTree;
	}
 	else return tree;
}

int main () {
   
	binTree * myTree = NULL;
	type leafValue = 0;
  
	myTree = createBinaryTree( myTree,  leafValue );
  
	return 0;
}
