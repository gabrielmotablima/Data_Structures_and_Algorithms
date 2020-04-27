// This code is intended for people wishing to understand the Structure
// of the Binary Tree. This createBinaryTree() function is merely didactic.

#include <stdio.h>
#include <stdlib.h>

typedef double type;
typedef char color;

typedef struct binaryTree {
	type value;
	color nodeColor;
	struct binaryTree * left, * right;
} binTree;

