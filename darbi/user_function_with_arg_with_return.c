#include<stdio.h>

int user_function_6(int i_uf)
	{
	i_uf++;
	printf("%d. reize\n",i_uf);
	return i_uf;
	}

void main()
	{
	int i_main=0,N=5;
	i_main = user_function_6(i_main);
	
	while(i_main<N)
		i_main = user_function_6(i_main);
	}
