#include<stdio.h>

int main(){
	char mas[5];
	for(int x=0;x<5;x++){
		mas[x]=x*x;
		printf("%d %d \n",x,mas[x]);
		
	}
	for(int x=0;x<10;x++){
		printf("mas[x]=%d\n",mas[x]);
	}
}

