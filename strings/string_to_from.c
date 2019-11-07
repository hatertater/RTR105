#include<stdio.h>
#include<stdlib.h>
void main(){
	char str[100];
	char str2[100];
	int i=100;
	FILE *fptr, *fptr2;

	fptr = fopen("randomteksts.txt", "w");
	if(fptr==NULL){
		printf("Trauksme !?");
		exit(1);
	}
	printf("Ievads pls\n");
	gets(str);

	fprintf(fptr, "%s", str);
	fclose(fptr);

	fptr2 = fopen("randomteksts.txt", "r");
	fscanf(fptr2,"%s", &str2);
	fclose(fptr2);

	printf("%s\n",str2);
}
