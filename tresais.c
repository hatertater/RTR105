#include<stdio.h>

void main(){
	int i=0, N, fact=1, facts=1,t=0;
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		fact=fact*i;
		if(fact/i==facts){
//			printf("%d! = %d\n",i,fact);
			facts=fact;
		}
		else{
			printf("Tik tālu reprezentēt faktoriāli esošajā datu tipā nav iespējams\n");
			t=1;
			break;
		}
	}
	if(t!=1){printf("%d! = %d\n",i,fact);}

}
