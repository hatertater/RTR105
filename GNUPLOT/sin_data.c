#include<stdio.h>
#include<math.h>
void main(){
	float a,b,x,y,delta_x;
	a=0;
	b=M_PI;
	x=a;
	y=a;
	delta_x=0.1;
	while(x<b){
		printf("%10.1f",x);
		x = x+delta_x;
		printf("%15.1f\n",y);
		y = sin(x);
	}
}
