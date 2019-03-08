// Roslyn Parker
// 8 March 2019 
// Version 21
// Purpose: Floating point struct exercise 1
#include <stdio.h> 

void printSingle(float f); 

int main() 
{ 
	float f = 3.5; 
	printSingle(f); 

	return 0; 
} 

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

	int sign = (*ptr >> 31) & 1; 
	int exp = (*ptr >> 23) & 0xff; 	
	int frac = *ptr & 0x7fffff;  

	printf("for value %1.1f,", f); 
	printf("sign = %x", sign); 
	printf(", exp = %d", exp); 
	printf(", frac = %x\n", frac); 
	 
	//struct Single s; 
	//*(float *)&s = f; 


}
