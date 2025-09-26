#include<stdio.h>
#include<string.h>

//Haris Jawaid 25K-3005 BSE-1B

int main (){
	
	char Correctusername[]="Student",Correctpassword[]="Fast1234";
	char Username[50],Password[50];
	
	printf("Enter Username\n");
	scanf("%s",&Username);;
	
	printf("Enter Password\n");
	scanf("%s",&Password);
	
	if(strcmp(Correctusername,Username)==0){
		if(strcmp(Correctpassword,Password)==0){
			printf("Login Successful!\n");
		}
		else{
			printf("Incorrect Password\n");
		}
	}
	else{
		printf("Username not found\n");
    }
	return 0;
}
