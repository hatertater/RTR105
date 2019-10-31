#include<stdio.h>

int main(){
	char mas[100];
	for(int x=0;x<100;x++){
		mas[x]=x+1;
		printf("%d %d %c\n",x,mas[x],mas[x]);
	}
}

