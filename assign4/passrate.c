#include<stdio.h>
#include<string.h>
struct stud {
   char name[50];
   float score;
};
//Please do not modify struct stud

//You are only allowed to modify inside function calculatePassRate
float calculatePassRate(struct stud studs[], int count) { //why is count here? C arrays do not carry any size indicator, we 
							  //must explicitly pass the number of elements in as an argument 
	//Please do not modify content of studs array
	//Your code here
	//Please traverse all the students in the array, and calculate the pass rate
	//passrate = (number of students whose score >= 60) / total number of students
	//return passrate to the caller
}

//Please do not modify main function
int main(void) {
	struct stud students[20];
	int stud_count=0;
	char temp_name[50];
	float passrate=0;
	float grade=0;
	printf("Enter a test score(-1 to quit), or\n");
	printf("Enter a grade first, then a student's name\n");
	scanf("%f", &grade);
	while (grade != -1)
	{

		scanf("%s", temp_name);
		students[stud_count].score = grade;
		strcpy(students[stud_count].name, temp_name);
		stud_count ++;
		
		printf("Enter a test score(-1 to quit), or\n");
		printf("Enter a grade first, then a student's name\n");
		scanf("%f", &grade);
	
	}
	if(stud_count > 2) {
		passrate = calculatePassRate(students, stud_count);
		printf("\nThe percent of passing grades is : %.2f\n", passrate);
	}
	return 0;
}
