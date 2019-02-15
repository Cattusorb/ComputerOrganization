//Copied mm.c from moodle

/* mm.c CJ Wang 1/25/2014
 * designed to explore memory layout
 */

#include <stdio.h>

void printFloat(void);
void localVariables();
void globleVariables();

int main()
{
  localVariables();
  globleVariables();
  printFloat();

  return 0;
}

void printFloat(void) //this function shows you the content of a float number in IEEE Floating-Point Representation (IFPR)
{
  float f=20.125; //IFPR: 0x41a10000 s=0, exp=0x83 frac=0x210000
  int i;
  unsigned char *p=(unsigned char *)&f;

  printf("f=%f\n", f);

  for( i = 0; i < sizeof(float); i ++ ) {
    printf("%p:%.2x\n", p+i, *(p+i));
  }
}

char g_buffer[4]="123";
int g_num1 = 10;
int g_num2 = 14;
void globleVariables() //this function shows you the layout for global variables
{
  int i;
  unsigned char *p;

  printf("\nGlobal variables...\n");

  printf( "buffer:\n");
  p = &g_buffer[0];
  for( i = 0; i < sizeof(g_buffer); i ++ ) {
    printf("[%d]=%p:%.2x\n", i, p+i, *(p+i));
  }

  printf( "num1:\n");
  p = (unsigned char*)&g_num1;
  for( i = 0; i < sizeof(g_num1); i ++ ) {
    printf("[%d]=%p:%.2x\n", i, p+i, *(p+i));
  }

  printf( "num2:\n");
  p = (unsigned char*)&g_num2;
  for( i = 0; i < sizeof(g_num2); i ++ ) {
    printf("[%d]=%p:%.2x\n", i, p+i, *(p+i));
  }
}

void localVariables() //this function shows you the layout for local variables
{
  char buffer[4]="123";
  int num1 = 10;
  int num2 = 14;
  int i;
  unsigned char *p;

  printf("\nLocal variables...\n");

  printf( "buffer:\n");
  p = &buffer[0];
  for( i = 0; i < sizeof(buffer); i ++ ) {
    printf("[%d]=%p:%.2x\n", i, p+i, *(p+i));
  }

  printf( "num1:\n");
  p = (unsigned char*)&num1;
  for( i = 0; i < sizeof(num1); i ++ ) {
    printf("[%d]=%p:%.2x\n", i, p+i, *(p+i));
  }

  printf( "num2:\n");
  p = (unsigned char*)&num2;
  for( i = 0; i < sizeof(num2); i ++ ) {
    printf("[%d]=%p:%.2x\n", i, p+i, *(p+i));
  }
}
