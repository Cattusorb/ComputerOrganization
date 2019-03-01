// Roslyn Parker
// 1 March 2019 
// Version 1
// Purpose exercise 2 in lab 5, printing floating point parts

#include <stdio.h> 

void printSingle(float f); 

void main() { 
	float f = 3.5; 
	printSingle(f); 
} 

void printSingle(float f) { 
	unsigned int *up = (unsigned int*)&f; //float f; 
	printf("For value %u, sign = %d, exp = , fraction= \n", up, up, up, up); 
} 
