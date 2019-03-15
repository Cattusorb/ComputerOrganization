// Roslyn Parker
// CIS2010 
// 15 March 2019
// Version: 2
// Purpose: exercise 2, defining a struct for employees

#include <stdio.h> 
#include <string.h> 

//Structure of an employee
struct employee 
{ 
	char* name; 
	int ssn[9]; 
	int yearBorn; 
	int salary; 
}e1={"Sally", {2, 2, 2, 3, 3, 4, 4, 4, 4}, 1999, 2500}; // Part 3 global initiallization 

// method initialization for printing out employee details
void printEmployee(struct employee emp); 

void main() 
{
	struct employee e2 = {"Jerry", {7, 7, 2, 9, 7, 8, 8, 0, 1}, 1982, 300}; 
	printEmployee(e2); 
}

void printEmployee(struct employee emp)
{ 
	printf("name: %s\n", emp.name); 
	for (int i = 0; i < 4; i++) {
	       	printf("%d", emp.ssn[i]); 
	} 
	printf("-"); 
	for (int a = 4; a < 6; a++) { 
		printf("%d", emp.ssn[a]); 
	} 
	printf("-"); 
	for (int b = 6; b < 9; b++) { 
		printf("%d", emp.ssn[b]); 
	} 
	printf("\n"); 

	printf("year of birth: %d \n", emp.yearBorn); 
	printf("salary: %d \n", emp.salary); 
} 
