///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////// Bubble Sort Algorithm ///////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

// Type Variable Standardization
typedef double type;

// Fill array randomly
type * fillRandomly ( type * array ) {
	srand ( time ( NULL ) );

	for ( int i = 0; i < N; i++ ) 
		array[i] = (rand()%N);

	return array;
}
 
type * bubbleSort ( type * array ) {
	type temp;
	for ( int i = 0; i < N; i++ ) {
		for ( int j = 0; j < N; j++ ) {
			if(array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	return array; 
}


void printArray ( type * array ) { 
	printf("\n");
  
	for ( int i = 0; i < N; i++ ) 
		printf("%f ", array[i]);
    
	printf("\n");
}

int main () {
	// Creating a randomly filled up array
	type * arrayValues = ( type* ) malloc ( N*sizeof ( type ) );
	arrayValues = fillRandomly ( arrayValues );
	printArray ( arrayValues );
  	
	// Sorting random values into array
	arrayValues = bubbleSort ( arrayValues );
	printArray ( arrayValues );
  
	return 0;
}
