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

	/*
	 * The code below is another way to solve the problem that I did not use
	 * in my program, this approach is more like the thing we did in class.
	 * It isn't completely perfect, but the key is the while loop. 
	int valueMan = value; // Value to manipulate into the binary number
	char *binary = (char*)malloc(13 * sizeof(char)); 
	while(valueMan >= 1) 
	{
	       if (valueMan % 2 == 0) 
	       { 
			valueMan = valueMan / 2; 
			binary = 0 + binary;  		
	       } else { 
		       valueMan = (valueMan - 1) / 2; 
		       binary = 1 + binary; 
	       } 
	} 
	printf("int: %d, binary: %s\n", value, binary);*/

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
 
