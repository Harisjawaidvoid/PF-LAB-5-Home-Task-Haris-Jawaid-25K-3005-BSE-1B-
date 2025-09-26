#include<stdio.h>
//Haris Jawaid 25K-3005
//Task Question 1
int main (){
	
	int age;
	printf("Enter your Age\n");
	scanf("%d",&age);
	if (age<5) {
	 printf("Free");}
	else if (age>=5 && age<=65){
		 printf("Standard");}
	else if (age>65){
		printf("Discount");
	}	 
	return 0;
}
