#include<stdio.h>
#include<time.h>
void main()
{
	int number1,clock_t,start_t,end_t,total_t;
	printf("Cienījamais lietotāj, lūdzu ievadi skaitli: ");
	scanf("%d",&number1);

	start_t=clock();
	if ((number1%2)==1 ){
		printf("sk nepāra \n ");
	}

	else{
		printf("sk pāra \n ");
	}
	end_t=clock();
	printf("Aizņēma %c",start_t-end_t);
}
