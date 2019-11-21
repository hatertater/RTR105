#include<stdio.h>
#include<math.h>

void main(){
	double x=2.05,y,a,S,o,p;

	o=1;
	p=1;
	y=sin(x);
	printf("%.2f\t%.2f\n",x,y);

	for(int z=0;z<5;z++){
	a=pow(-1,z)*pow(x,2*z+1)/(1.*o);
	S+=a;
	printf("%.2f\t%.2f\t%.2f\n",x,a,S);
	o=o*(p+1)*(p+2);
	p+=2;
	}
}
