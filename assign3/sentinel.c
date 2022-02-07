#include <stdio.h>
int main(void) {


	int t;
	int grades[20]; //we declare an array of 20 grades because the question assumes the capacity of the class is 20
	int i = 0; //i can represent how many grades are stored in array.

	printf("Enter a grade:\n");
	scanf("%d", &t);

	//TODO: The purpose of this program is to find the average of students' grades.  Read the comments and follow the step-by-step "TODO" instructions below.
	//We do not know how many grades we will get eventually -- the max is 20 grades, but
	//some students could be absent. We will keep on accepting grades until we see an
	//input of -1. Grades can't be negative, and we are using -1 as a sentinel to end the input.
	
	while(???){ // TODO: replace ??? with condition to check if it is -1
			//(now we know it is not -1, because we are in the loop)
		//TODO: Now add the grade t to the grades array, and increase index i by 1.
		/**your code here**/

		//TODO: Read a new grade and store in t, why? because we have already processed what is in t
			//We are ready to process next grade, we will repeat read->check->process
			//                                                     ^             |	
			//                                                     |_____________|
			//in which read is to scan data into t, check is to make sure t is not the
			//sentinel -1 (which would terminate the loop) and process t to store it into grades.
			//Double check your loop body follows this workflow described above.

		/**your code here**/

	}
	
	float average; //DO NOT modify this declaration

	//TODO: Now write a loop to find the average of the class grades.
		//Make sure the result is stored in the float average declared as above (in line 34)

	/**your code here**/


	//DO NOT change the following printf
	printf("the average grade of the class is %.2f", average);

	return 0;
}
