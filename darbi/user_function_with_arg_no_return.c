#include<stdio.h>

void user_function_3(int i_uf)
	{
	printf("Cienījamais lietotāj, sveicieni no %d. tukšās, bezjēdzīgās funkcijas!\n",i_uf);
	}

void user_function_4(int i_uf, double d_uf);

void main()
	{
	int i_main=0, N=2;
	while(i_main<9)
		{
		i_main++;
		user_function_3(i_main);
		user_function_4(i_main,(double)i_main/N);
		}
	}

void user_function_4(int i_uf, double d_uf)
	{
	printf("Vienkārši skaitām: %d reize, tātad %.2f daļa(s)!\n",i_uf,d_uf);
	}
