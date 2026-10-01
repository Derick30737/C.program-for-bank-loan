//NAME:Derick Murimi
//REG:CT100/G.30737/26
//DATE:1/10/2026
#include<stdio.h>

int main(){
	int age;
	float income;
	printf("Enter your age:");
	scanf("%d",&age);
	printf("Enter your income:");
	scanf("%f",&income);
	
	if (age>=21 &&income>=21000){
		printf("cogratulations you qualify for a loan.\n");
	}
		
	else {
		printf("unfortunately, we are unable to offer you a loan at this time.");
	}
	return 0;
	
}


	

