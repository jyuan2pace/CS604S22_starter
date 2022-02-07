#include <stdio.h>

int main(void) {

	int input;
	printf ("please enter a number greater than 5 and less than 10\n");
	scanf("%d", &input);

	//TODO: Read the comments and complete the "TODO" instruction in line 15 to 
	//to produce the expected behavior. The expected behavior of the program is 
	//to print out valid data!:) only when the user enters 
	//a number greater than 5 and less than 10. Any other number will cause the system to
	//be stuck in the loop and continue to ask for inputs.
	//Do NOT modify any other code. Change ONLY line 15

	while(???) { //TODO: please replace ??? with a compound conditional expression
		printf ("invalid number\n");
		printf ("please enter a number greater than 5 and less than 10\n");
		scanf("%d", &input);
	}
	printf("valid data!:)\n");
	return 0;
}
