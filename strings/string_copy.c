#include<stdio.h>
#include<string.h>

void main(){
	char str[50],str2[50];
	printf("Ievads pls\n");
	scanf("%[^\n]",str);
	strcpy(str2,str);
	printf("%s\n",str2);
}
