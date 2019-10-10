#include<stdio.h>

void main()
{
	int number1, number2;
	printf("Cienījamais lietotāj, lūdzu ievadi 1. skaitli: ");
	scanf("%d",&number1);
	printf("Cienījamais lietotāj, lūdzu ievadi 2. skaitli: ");
	scanf("%d",&number2);
	if (number1 > number2){
		printf("1.sk %d > 2.sk %d\n ", number1,number2);
	}
	else if (number1 < number2){
		printf("1.sk %d < 2.sk %d\n ", number1,number2);
	}
	else{
		printf("1.sk %d = 2.sk %d\n ", number1,number2);
	}
}
