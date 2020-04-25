// Was coded only the list's create function and the list's structure.
// The code was typed like this because the ways of inserting and 
// removing the nodes will be coded later (stack, queue, deque, etc).


// This code is intended for people wishing to understand the Structure
// of the Doubly Linked Circular List. In other implementations, we will
// not code like this. The createList() function is merely didactic.

#include <stdio.h>
#include <stdlib.h>

typedef double type;

typedef struct list {
	type value;
	struct list * next, * prev;
} List;

List * createList ( List * list, type value) {
	if ( list == NULL ) {
		List * newList = ( List * ) malloc ( sizeof ( List ) );
		
		newList -> value = value;
		newList -> next = newList;
		newList -> prev = newList;
		
		return newList;
	}
}

int main () {
   
	List * myList = NULL;
	type nodeValue = 0;
  
	myList = createList( myList,  nodeValue );
  
	return 0;
}
