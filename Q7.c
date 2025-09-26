#include<stdio.h>

//Haris Jawaid 25K-3005 BSE-1B

int main (){
	
	int permission;
	
	printf("Enter Permission\n");
	scanf("%d",&permission);
	
	if (permission & 4){
		printf("Access granted: Full Control\n");
	}
	else {
		if (permission & 1 && permission & 2){
			printf("Access granted: Read and Write");
		}
		else{
			if (permission & 1){
				printf("Access granted: Read only");
			}
			else{
				printf("Access Denied");
			}
		}
	}
	
	return 0;
}
