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

// method to read employees -- takes a pointer to an employee struct and fills
// in the details, prompts the user for eaech field
void readEmployee(struct employee e, struct employee *ptr); 

//method to allocate memory for an employee
void createEmployee(); 

//method to release an employee, free all memory of employee
void releaseEmployee(struct employee *ptr); 

void main() 
{
	struct employee e2 = {"Jerry", {7, 7, 2, 9, 7, 8, 8, 0, 1}, 1982, 300}; 
	printEmployee(e2);
        createEmployee();

	struct employee *ptr_thing; 
	releaseEmployee(ptr_thing); 
	// Q1: One call to malloc is made during createEmployee, and in the 
	// readEmployee it is called 4 times, one for every variable in 
	// the employee struct. 
	// Q2: If the employee's name is Joe Smith, the total memory allocated
	// is 9 bits. 
	// Q3: It is long enough to hold the ssn without the dividers in it,
	// which is pretty much all you need, because you can print it out and
	// make it look any way you choose. 
	// Q4: There were ___ cakks to free made, and it does agree with the 
	// number of calles to malloc that were made. 
	// Q5: I think the outcomes would be different if I passed in the 
	// address of a global variable as opposed to a local variable. 
	// The adresses would be different. One would be higher and one
	// would be lower. 	
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

void readEmployee(struct employee e, struct employee *ptr) 
{ 
	printf("What is your name? \n"); 
	scanf("%s", &(*ptr).name); 
	printf("What is your ssn? \n"); 
	scanf("%d", &(*ptr).ssn); 
	printf("What is your year of birth? \n"); 
	scanf("%d", &(*ptr).yearBorn); 
	printf("What is your salary (rounded)? \n"); 
	scanf("%d", &(*ptr).salary);  	
} 

void createEmployee() 
{
	struct employee e;
        struct employee *ptr; 
	ptr = malloc (sizeof(e)); 	
	
       	readEmployee(e, ptr); 	

} 

void releaseEmployee(struct employee *ptr)
{ 
	// free all memory from the employee 
} 	


