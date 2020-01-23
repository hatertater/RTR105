#include<stdio.h>
#include<string.h>

void main(){
	char str[50]="";
	char m;
	char strDisplay[200]="";

	printf("Ievadi simbolrindu\n");
	scanf("%[^\n]",str);
	printf("garums ir %li\n",strlen(str));
	int min=str[0],max=str[0],total=0,temp;
	for(int x=0;x<strlen(str);x++){
		int y = str[x];
		total=total+y;
		if(y<min){
			min=y;
		}
		if(y>max){
			max=y;
		}
	}
	for(int i=0;i<strlen(str);i++){
		for(int j=i+1;j<strlen(str);j++){
			if(str[i]>str[j]){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("----------\n");
	printf("%s\n",str);
	for(int i=0;i<strlen(str);i++){
		printf("%i ",str[i]);
	}
	printf("\n----------\n");
	float median;
	if(strlen(str)%2==1){median=str[strlen(str)/2];}
	else{median=(str[strlen(str)/2]+str[strlen(str)/2-1])/2.;}
	int mode=1,temporary=1;
	float u =(float)total/(float)strlen(str);
	for(int i=1;i<strlen(str);i++){
		if(str[i-1]==str[i]){
			temporary++;
			if(temporary>mode){mode=temporary;m=str[i];}
		}
		else{temporary=1;}
	}
	printf("mazākā vērtība ir %i\n", min);
	printf("lielākā vērtība ir %i\n", max);
	printf("vidējā vērtība ir %.1f\n",u);
	printf("%s",strDisplay);
	printf("Mediāna ir %.1f\n",median);
	printf("Moda ir %c\n",m);
}
