#include<stdio.h>

//Haris Jawaid 25K-30005 BSE-1B

int main (){
	
	char Room,Action;
	
	printf("Enter the Room from Following\nL for Living Room\nK for Kitchen\n");
	scanf("%c",&Room);
	printf("Enter Action from the Following\nL for Lights\nT for Thermostat\n");
	scanf(" %c",&Action);
	
	switch (Room){
		case 'L': case 'l':
			switch(Action){
				case 'L': case 'l':
					printf("Adjusting ambient lighting");
				break;
				case 'T':case 't':
					printf("Setting living room temperature");
				break;
				default:printf("Invalid Input");
				break;}
		break;		
		case 'K':case 'k':
			switch (Action){
				case 'L':case 'l':
					printf("Turning on bright task lighting");
				break;
				case'T':case't':
					printf("Setting Kitchen Thermostat");
				break;
				default:printf("Invalid Input");
			}	
		break;
		default:printf("Invalid input");
	}
	return 0;
}
