//Roslyn Parker
//15 Feb 2018 
//Version: 3
//The purpose of this .c file is exercise 1 in the lab

#include <stdio.h> 

int main() 
{ 
	// ux is an unsigned char 
	char ux; 

	// Ask the user to enter in a char
	printf("Enter an unsigned char: \n");
	// Take the char and put it into ux	
	scanf("%x", &ux); 

	// Print out the unsigned char and signed char
	printf("unsigned x: %u decimal x:  %d", ux, ux); 

	return 0; 
} 
