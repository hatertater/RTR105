#include<stdio.h>

void main()
{
	int number1, number2, yes_no, i;
	yes_no=1;
	i=0;
	while(yes_no&&(i<5))
		{
		i++;
		printf("Cienījamais lietotāj, lūdzu ievadi 1. skaitli: ");
		scanf("%d",&number1);
		printf("Cienījamais lietotāj, lūdzu ievadi 2. skaitli: ");
		scanf("%d",&number2);
		if (number1 > number2){
			printf("1.sk %d > 2.sk %d\n ", number1,number2);}
		if (number1 < number2){
			printf("1.sk %d < 2.sk %d\n ", number1,number2);}
		if (number1== number2){
			printf("1.sk %d == 2.sk %d\n ", number1,number2);}
		if(i==5){printf("Game over");break;}

		printf("Can you kill me? (jā-jebkurš nenulles skaitlis) \n");
		scanf("%d",&yes_no);
	
	}
}
