#include<stdio.h>

int user_function_5()
	{
	int i_uf;
	printf("Ievads\n");
	scanf("%d",&i_uf);
	return i_uf;
	}

void main()
	{
	int i_main,N=2;
	i_main=user_function_5();
	while(i_main!=N)
		{
		printf("You've fallen into my bag of tricks!");
		i_main=user_function_5();

		}
	}
