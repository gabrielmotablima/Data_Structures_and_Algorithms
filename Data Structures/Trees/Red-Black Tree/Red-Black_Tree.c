// This code is intended for people wishing to understand the Structure
// of the Binary Tree. This createRBTree() function is merely didactic.

#include <stdio.h>
#include <stdlib.h>

typedef double type;

typedef struct Tree {
	type value;
	char nodeColor;
	struct Tree * left, * right;
} RBTree;

RBTree * createRBTree (RBTree * tree, type value, char color) {
	if (tree == NULL) {
		RBTree * newTree = (RBTree *) malloc (sizeof (RBTree));
		
		newTree -> value = value;
		newTree -> nodeColor = color;
		newTree -> right = NULL;
		newTree -> left = NULL;
		
		return newTree;
	}
 	else return tree;
}

int main () {
   
	RBTree * myTree = NULL;
	type leafValue = 0;
  	char color = 'r';
	myTree = createRBTree( myTree,  leafValue, color );
  
	return 0;
}
