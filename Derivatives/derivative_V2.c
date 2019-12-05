#include<stdio.h>
#include<math.h>
float function(float);
void main(){
	float a=0.,b=2*M_PI,x,delta_x=1.e-2;

	printf("\tx\t\tsin(x)*cos(c)\t\tsin\'(x)\n");
	x = a;
	while(x<b){
		printf("\t%10.2f\t\t%10.2f\t\t%10.2f\n",x,function(x),(function(x+delta_x)-function(x))/delta_x);
		x += delta_x;
	}
}
float function(float z){
	return cos(z)*cos(z)*sin(z)*sin(z);
}
