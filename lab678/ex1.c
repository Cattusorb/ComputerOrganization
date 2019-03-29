// Roslyn Parker
// 15 March 2019 
// Version 25
// Purpose: Floating point struct exercise 1
#include <stdio.h>

void printSingle(float f); 

int main() 
{ 
	float f = 3.5; 
	printSingle(f); 

	return 0; 
} 

// Struct of a floating point 
struct floatingPoint { 
	int sign; 
	int exp; 
	int frac; 
}; 

void printSingle(float f) 
{ 
	// a Floating point number has 3 parts 
	// The formula for a floating point is (-1)^s M 2^E
	// We need to print out the sign, exp, and fraction 
	// sign = first bit, sign bit
	// exp = e + bias
	// frac = 1.0 + 0.M
	// M is the mantissa, normally a fractional value from 1.0-2.0
	unsigned int* ptr = (unsigned int*)&f; 
	
	//Declare parts of type floatingPoint
	struct floatingPoint parts;

	// parts specification
	parts.sign = (*ptr >> 31) & 1; 
	parts.exp = (*ptr >> 23) & 0xff; 	
	parts.frac = *ptr & 0x7fffff;  
	 
	// Print out outcomes
	printf("for value %1.1f, ", f); 
	printf("sign = %x", parts.sign);
        printf(", exp = %d,", parts.exp); 
	printf(" frac = %x \n", parts.frac); 	

	// Answer to question 1: 
	// The pointer castings works to get the value into a different format, 
	// because when you cast a stucture to a floating point it's like an
	// array where you can get multiple elements(or parts) for that 
	// floating point using the pointer. Just like we saw in HW2. 
	// if we set the floating point address of s equal to f,
	// then we can look at the same point in memory with different parts.
	// I didn't do that in this, but I found a way to make it work. 
	
}
