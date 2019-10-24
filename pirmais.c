#include<stdio.h>
#include<math.h>
void main()
{
	int c,b,a,t;
	printf("Cienījamais lietotāj, lūdzu ievadi 1. skaitli:\n ");
	scanf("%d",&a);
	printf("Cienījamais lietotāj, lūdzu ievadi 2. skaitli:\n ");
	scanf("%d",&b);
	printf("Cienījamais lietotāj, lūdzu ievadi 3. skaitli:\n ");
	scanf("%d",&c);

	if(a>b && a>c){
		if(b>c);
		else{t=c;c=b;b=t;}
	}
	if(a<b && b>c){
		if(a>c){t=a;a=b;b=t;}
		else{t=a;a=b;b=c;c=t;}
	}
	if(c>b && a<c){
		if(a>b){t=a;a=c;c=b;b=t;}
		else{t=a;a=c;c=t;}
	}
	printf("augošs:%d,%d,%d\n",c,b,a);
	printf("dilstošs:%d,%d,%d\n",a,b,c);
}
