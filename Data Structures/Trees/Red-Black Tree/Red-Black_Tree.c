// This code is intended for people wishing to understand the Structure
// of the Binary Tree. This createRBTree() function is merely didactic.

#include <stdio.h>
#include <stdlib.h>

typedef double type;
typedef char color;

typedef struct Tree {
	type value;
	color nodeColor;
	struct Tree * left, * right;
} RB_Tree;

