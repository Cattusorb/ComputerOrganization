// Roslyn Parker
// CIS2010 
// 15 March 2019 - 29 March 2019
// Version: 41
// Purpose: exercise 2, defining a struct for employees

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>  

//Structure of an employee
struct employee 
{ 
	char* name; 
	int ssn[9]; 
	int yearBorn; 
	int salary; 
}e1={"Sally", {2, 2, 2, 3, 3, 4, 4, 4, 4}, 1999, 2500}; // Part 3 global initiallization 

// Global variable for array of pointers to employee structs
struct employee *emp[10]; 
int employeeCount; 

// method initialization for printing out employee details
void printEmployee(struct employee *ptr); 

// method to read employees -- takes a pointer to an employee struct and fills
// in the details, prompts the user for eaech field
void readEmployee(struct employee *ptr); 

//method to allocate memory for an employee
struct employee* createEmployee(); 

//method to release an employee, free all memory of employee
void releaseEmployee(struct employee *ptr); 

// method to find an employee by string
struct employee* findEmployee(); 

// displays all employees in the list
void listEmployees(); 

void main() 
{

	employeeCount = 0; 
        
	char input[20] = "yes";
        char checkQuit[20] = "QUIT";
	char checkHire[20] ="HIRE"; 
	char checkList[20] = "LIST"; 
	char checkFind[20] = "FIND";

	while (strcmp(checkQuit, input) != 0) 
	{ 
		printf("Hello! \nIf you would like to hire an employee type 'HIRE' \n"); 
		printf("If you would like to see a list of all employees type 'LIST' \n"); 
		printf("If you would like to find a certain employee type 'FIND' \n"); 
		printf("If you would like to leave this prompt type 'QUIT' \n"); 
		
	        scanf("%s", input); 
       	        if (strcmp(checkHire, input)) {
			createEmployee(); 
	        }

		if (strcmp(checkList, input)) { 
			listEmployees(); 
		} 		

		if (strcmp(checkFind, input)) {
		       findEmployee(); 	
		} 
	} 

	for (int i = 0; i < sizeof(emp); i++) { 
		releaseEmployee(emp[i]); 
	} 
	// Q1: One call to malloc is made during createEmployee, this includes other calls in readEmployee.
	// Q2: If the employee's name is Joe Smith, the total memory allocated
	// is 4 bits. There is the same amount of memory for each name. 
	// Q3: It is long enough to hold the ssn without the dividers in it,
	// which is pretty much all you need, because you can print it out and
	// make it look any way you choose. 
	// Q4: There was one call to free made, and it does agree with the 
	// number of calles to malloc that were made. 
	// Q5: I think the outcomes would be different if I passed in the 
	// address of a global variable as opposed to a local variable. 
	// The adresses would be different. One would be higher and one
	// would be lower. 	
}

void printEmployee(struct employee *ptr)
{ 
	printf("name: %s\n", (*ptr).name); 
	for (int i = 0; i < 4; i++) {
	       	printf("%d", (*ptr).ssn[i]); 
	} 
	printf("-"); 
	for (int a = 4; a < 6; a++) { 
		printf("%d", (*ptr).ssn[a]); 
	} 
	printf("-"); 
	for (int b = 6; b < 9; b++) { 
		printf("%d", (*ptr).ssn[b]); 
	} 
	printf("\n"); 

	printf("year of birth: %d \n", (*ptr).yearBorn); 
	printf("salary: %d \n", (*ptr).salary); 
}

void readEmployee(struct employee *ptr) 
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

struct employee* createEmployee() 
{
        struct employee *ptr; 
	ptr = malloc (sizeof(struct employee)); 	
	
	// create employee should add the new employee to the array or employees
	emp[employeeCount] = ptr; 
	employeeCount++; 

       	readEmployee(ptr); 	
	
	return ptr; 
} 

void releaseEmployee(struct employee *ptr)
{ 
	// free all memory of an emloyee
	free(ptr); 
	printf("Employee has been released. \n"); 
} 	

struct employee* findEmployee() 
{ 	
	// input name of the person they enter
	char name[40] = "enter me"; 	
	// ask then to enter a name
	printf("Hello again! \n Please type in the name of the employee you are looking for: \n"); 
	scanf("%s", name); 

	// loop to look through all of the employees
	for(int i = 0; i < sizeof(emp); i++) {
	       if (strcmp((*emp[i]).name, name) == 0) { 
		       printEmployee(emp[i]);
		       return emp[i]; 
	       } 	       
	} 

	// if employee isn't found, return null
	return NULL; 
}

void listEmployees()
{

	// basically a for loop that goes through the list of employees and calls printEmployee(); 
	for (int i = 0; i < sizeof(emp); i++) {
		printEmployee(emp[i]);
	} 
}


