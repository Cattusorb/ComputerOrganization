// Roslyn Parker
// 1 March 2019 
// Version 12
// Purpose: Exercise 1 on lab 5, print binary function

#include <stdio.h> 
#include <stdlib.h>
 /**
 * Prints the binary number of the value given
 * @param value - integer number to be changed to binary 
 **/ 
void printBin(long value) 
{
	long orgValue = value; // original value to print at the end
	int remainder; // remainder of the value % 2 
	long binary = 0, i = 1; // binary number and i to keep track 

	// while loop to to turn the value into a binary number
	while (value != 0) { 
		// get the remainder of the current value
		remainder = value%2; 
		// change the value to half of the value
		value = value/2; 
		// add the remainder * i to the binary number
		binary = binary + (remainder*i); 
		// change i 
		i = i * 10; 
	} 
	
	// print the output
	printf("int: %lld, binary: %lld \n", orgValue, binary); 

	// Another way to preform the same function to print out the binary number is, 
	// using the bitwise & 

}

int main() 
{
	// I supressed the leading zeros; 
	long a = 12; 
	long b = 0; 
	long c = -4; 
	printBin(a); 
	printBin(b); 
	printBin(c); 

	return 0; 	
} 
 
