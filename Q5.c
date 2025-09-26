#include<stdio.h>

//Haris Jawaid BSE-1B 25K-3005

int main(){
	
	int hasPrerequisite,isCourseFull;
	
	printf("Do you have Completed Prerequisite\n1)Completed\n0)Missing\n");
	scanf("%d",&hasPrerequisite);
	printf("Is the Course Full\n1)Full\n0)Not Full\n");
	scanf("%d",&isCourseFull);
	
	if (hasPrerequisite==1){
		if(isCourseFull==0){
			printf("Enrolled successfully\n");
		}
		else if (isCourseFull==1){
			printf("Cannot enroll: course is full\n");
		}
		else{
			printf("Invalid Input");
		}
	}
	else if (hasPrerequisite==0){
		if(isCourseFull==0){
			printf("Cannot enroll: prerequisite missing\n");
		}
		else if (isCourseFull==1){
			printf("Cannot enroll: prerequisite missing and course is full\n");
		}
		else {printf("Invalid Input\n");
		}
	}
	else {
		printf("Invalid Input");
	}
	return 0;
}
