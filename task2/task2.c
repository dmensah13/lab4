#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);


int main (void)
{
	// Array of functions of type
	Operation operations[4];
	char operation[10];
  int choice;
  int a = 2;
  int b = 9;
  int answer;
	
	operations[0] = &add;
	operations[1] = &subtract;
	operations[2] = &multiply;
	operations[3] = &divide;
  
  while(1){
    printf("Value of A: %d \n Value of B : %d \n Choose the operation that you would wish to do \n **************** \n 0 : Addition \n **************** \n 1 : Subtraction \n **************** \n 2 : Multiplaction \n **************** \n 3: Dvision \n **************** \n 4 : Leave):", a, b);
    scanf("%s", operation);
    choice = atoi(operation);
    while (choice > 4) {
      printf("Choose the operation that you would wish to do \n **************** \n 0 : Addition \n **************** \n 1 : Subtraction \n **************** \n 2 : Multiplaction \n **************** \n 3: Dvision \n **************** \n 4 : Leave):");
      scanf("%s", operation); 
      choice = atoi(operation);
    }
		
		if (choice == 4){ 
      break; 
    }
		
		answer = (*operations[choice])(a, b);
		printf("x = %d\n", answer);
	}

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b;}
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b;}
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b;}
