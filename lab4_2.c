//Roslyn Parker
//15 Feb 2018 
//Version: 1
//The purpose of this lab4_2.c is exercise 2 for lab4

#include <stdio.h> 

int main() 
{
	// int to store the input 
	int x; 
	// Ask the user to input an interger
	printf("Enter an integer: \n");
	// Take the input of the user
	scanf("%d", &x); 

	// Print out the int as an octal and hex number
	printf("octal x: %o hex x: %x", x, x); 

	return 0; 
} 	

