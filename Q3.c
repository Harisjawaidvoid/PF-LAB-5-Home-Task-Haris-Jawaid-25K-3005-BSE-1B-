#include<stdio.h>

//Haris Jawaid 25K-3005 BSE-1B

int main (){
	
	float a,b,c,discriminant;
	
	printf("Enter value for a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	
	discriminant=b*b - 4*a*c;
	printf("Discriminant:%f\n",discriminant);
	
	if (a==0){
		printf("invalid not a quadratic equation");
	}
	else {
		if(discriminant>0){
			printf("Two Real root");
		}
		else if (discriminant==0){
			printf("One Real root");
		}
		else {
			printf("Imaginary root");
		}
	}
	return 0;
}
