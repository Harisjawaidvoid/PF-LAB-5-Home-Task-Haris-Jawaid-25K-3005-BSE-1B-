#include<stdio.h>

//Question 2
//Haris Jawaid 25K-3005 BSE-1B

int main (){
	
	int power;
	char color;
	
	printf("Enter Power Status\n1)On\n2)Off\n");
	scanf("%d",&power);
	if (power==1){
		printf("Enter Signal Colour\nR for Red\nY for Yellow\nG for Green\n");
		scanf(" %c",&color);
		if (color=='R' || color=='r'){
			printf("Stop");
		}
		else if (color=='Y' || color=='y'){
			printf("Caution");
		}
		else if (color=='G' || color =='g'){
			printf("Go");
		}
		else{printf("invalid");
		}
	}
	else if (power==2){
		printf("Signal Off");
	}
	else{
		printf("Invalid Input");
	}
	
	return 0;
}
