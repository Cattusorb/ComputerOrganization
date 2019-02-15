// Roslyn Parker
// 15 Feb 2019
// Version: 5
// The purpose of this .c file is exercise 3 part 2 in the lab

// This .c file holds the main for mm.c

#include <stdio.h>
#include "lab4_3.h"

int main()
{
  // How to Compile this code: 
  // gcc -c lab4_31.c lab4_32.c
  // gcc -o lab4_3.exe lab4_31.o lab4_32.o
  // ./lab4_3.exe
  // and you have run the program!
  
  // How the c compiler allocates memory: 
  // In the addresses of the local variables vs the global variables, 
  // the local variables look bigger than the global variables. 
  // There is the heap and the stack. Local variables are stored in the stack 
  // and have lower addresses. Global variables are stored in static. The heap
  // has higher addresses than the stack. 
	
  localVariables();
  globleVariables();
  printFloat();

  return 0;
}
